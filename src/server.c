/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:09:46 by avoronko          #+#    #+#             */
/*   Updated: 2023/09/28 20:34:28 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

char	g_char[9];

static unsigned char	byte_to_char(void)
{
	int				i;
	unsigned char	chr;

	i = -1;
	chr = 0;
	while (i++ < 8)
		chr |= (g_char[i] - '0') << i;
	return (chr);
}

void	handle_signal(int signal, siginfo_t *info, void *context)
{
	static unsigned char	current_char;
	static int				bit_index;

	(void)context;
	if (signal == SIGUSR1)
		g_char[bit_index++] = '1';
	else if (signal == SIGUSR2)
		g_char[bit_index++] = '0';
	if (bit_index == 8)
	{
		g_char[bit_index] = '\0';
		current_char = byte_to_char();
		if (current_char == '\0')
		{
			kill(info->si_pid, SIGUSR2);
			write(1, "\n", 1);
		}
		else
			write(1, &current_char, 1);
		current_char = 0;
		bit_index = 0;
		ft_memset(g_char, 0, sizeof(g_char));
	}
	if (signal == SIGUSR1 || signal == SIGUSR2)
		kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("Server PID = %d\n", getpid());
	sa.sa_sigaction = &handle_signal;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	if ((sigaction(SIGUSR1, &sa, 0) == -1)
		|| (sigaction(SIGUSR2, &sa, 0) == -1))
	{
		ft_printf("Error calling sigaction");
		exit(EXIT_FAILURE);
	}
	while (1)
		pause();
	return (EXIT_SUCCESS);
}
