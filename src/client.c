/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:09:39 by avoronko          #+#    #+#             */
/*   Updated: 2023/09/29 13:12:11 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

volatile int	g_recieved_signal = 0;

static void	send_signal(pid_t pid, unsigned char character)
{
	int	i;
	int	signal;

	i = 0;
	while (i < 8)
	{
		if ((character >> i) & 1)
			signal = SIGUSR1;
		else
			signal = SIGUSR2;
		if (kill(pid, signal) < 0)
		{
			ft_printf("Error sending signal");
			exit(EXIT_FAILURE);
		}
		while (!g_recieved_signal)
			pause();
		g_recieved_signal = 0;
		i++;
	}
}

void	handle_signal(int signal)
{
	static int	bits_recieved;

	if (signal == SIGUSR1)
	{
		bits_recieved++;
		g_recieved_signal = 1;
	}
	else
	{
		ft_printf("Bits sent: %d\n", bits_recieved);
		exit(EXIT_SUCCESS);
	}
}

void	args_check(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 3)
	{
		ft_printf("Error: invalid number of arguments");
		exit(EXIT_FAILURE);
	}
	if (!ft_isdigit(argv[1][i++]))
	{
		ft_printf("Error: invalid PID");
		exit(EXIT_FAILURE);
	}
	if (ft_atoi(argv[1]) < 1000)
	{
		ft_printf("Error: PID reserved for system");
		exit(EXIT_FAILURE);
	}
}

void	catch_signals(void)
{
	struct sigaction	sa;

	sa.sa_handler = &handle_signal;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	if ((sigaction(SIGUSR1, &sa, NULL) == -1)
		|| (sigaction(SIGUSR2, &sa, NULL) == -1))
	{
		ft_printf("Error calling sigaction");
		exit(EXIT_FAILURE);
	}
}

int	main(int argc, char **argv)
{
	pid_t		pid;

	pid = ft_atoi(argv[1]);
	args_check(argc, argv);
	catch_signals();
	while (*argv[2])
	{
		send_signal(pid, *argv[2]);
		argv[2]++;
	}
	send_signal(pid, '\0');
	return (EXIT_SUCCESS);
}
