/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:57:29 by avoronko          #+#    #+#             */
/*   Updated: 2023/09/28 20:41:13 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);

//	mem		********************************************************************

/**	@brief	fills the first n bytes of the memory
 * 			area pointed to by s with the constant byte c.
 *	@param	s Pointer to the first byte of memory area
 *	@param	c Constant byte to fill memory area
 *	@param	n Number of bytes to fill
 * 	@return	void* Returns a pointer to the memory area s */
void	*ft_memset(void *s, int c, size_t n);

/**	@brief	sets n bytes of s to 0.
 *	@param	s Pointer to the first byte of the memory location
 *	@param	n Buffer size */
void	ft_bzero(void *s, size_t n);

/**	@brief	Copies n bytes from memory area src to memory area dest.
 *	@param	dest	Destination pointer of memory area
 *	@param	src		Source pointer of memory area
 *	@param	n		Buffer size in bytes */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**	@brief	Copies no more than n bytes from memory area src to memory
 *  		area dest.
 * 			If the memory areas overlap, the results are undefined.
 * @param	dest	Destination pointer of memory area
 * @param	src		Source pointer of memory area
 * @param	n		Buffer size
 * @return	void* Returns pointer to the first byte of dest,
 * 			or NULL if c was not found in the first n characters of src. */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**	@brief	Copies n bytes from memory area src to memory area dest.
 *	@param	dest	Destination pointer of memory area
 *	@param	src		Source pointer of memory area
 *	@param	n		Buffer size in bytes
 *	@return	void* Returns a pointer to dest. */
void	*ft_memmove(void *dest, const void *src, size_t len);

/**	@brief	Scans the initial n bytes of the memory area
 *			pointed to by s for the first instance of c
 *	@param	s Pointer to the initial memory area
 *	@param	c Character to be searched
 *	@param	n Buffer size
 *	@return	Return a pointer str to the matching byte
 * 			or NULL if it does not occur */
void	*ft_memchr(const void *s, int c, size_t n);

/**	@brief	compares the first n bytes (each interpreted
 * 			as unsigned char) of the memory areas s1 and s2.
 *	@param	s1	Pointer to the first memory area to be compared
 *	@param	s2	Pointer to the second memory area to be compared
 *	@param	n	Buffer size in bytes
 *	@return	int Returns an integer less than, equal to, or greater than zero
 *  		if the first n bytes of s1 is found, respectively, to be less than,
 * 			to match, or be greater than the first n bytes of s2. */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

//		********************************************************************
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//	malloc	********************************************************************

/**	@brief 	Allocates memory for an array of nmemb elements of size bytes each
 *			and returns a pointer to the allocated memory. The memory
 * 			is set to zero.
 *	@param	nmemb	Number of elements in array
 *	@param	size	Size of bytes for each element
 *	@return	void* Return a pointer to the allocated memory,
 *			which is suitably aligned for any built-in
 * 			type. On error, these functions return NULL. NULL may also
 * 			be returned by a successful call but with size 0. */
void	*ft_calloc(size_t nmemb, size_t size);

/**	@brief	Returns a pointer to a new string
 * 			which is a duplicate of the string s.
 *	@param	s1 Pointer to the start of the string do be copied
 *	@return	char* On success, returns a pointer to the
 * 			duplicated string. It returns NULL if insufficient memory was
 * 			available, with errno set to indicate the cause of the error.*/
char	*ft_strdup(const char *s1);

/* ********************************* PART 2 ********************************* */

// 	str		********************************************************************

/**	@brief	Allocates (with malloc(3)) and returns a substring from
 * 			the string ’s’. The substring begins at index ’start’
 * 			and is of maximum size ’len’.
 *	@param	s		The string from which to create the substring.
 *	@param	start	The start index of the substring in the string’s’.
 *	@param	len		The maximum length of the substring.
 *	@return char* Returns the substring. NULL if the allocation fails. */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**	@brief	Allocates (with malloc(3)) and returns a newstring,
 *			which is the result of the concatenationof ’s1’ and ’s2’.
 *	@param	s1 The prefix string
 *	@param	s2 The suffix string
 *	@return char* Returns the new string or NULL if the allocation fails. */
char	*ft_strjoin(char const *s1, char const *s2);

/**	@brief 	Allocates (with malloc(3)) and returns a copy of ’s1’
 * 			with the characters specified in ’set’ removed from
 * 			the beginning and the end of the string.
 *	@param	s1	The string to be trimmed
 *	@param	set	The set of characters to trim
 *	@return	char* Returns the trimmed string,
 *			or NULL if allocation fails. */
char	*ft_strtrim(char const *s1, char const *set);

/**	@brief	Allocates (with malloc(3)) and returns an array of strings
 * 			obtained by splitting ’s’ using the character ’c’ as a delimiter.
 *			The array must be ended by a NULL pointer.
 *	@param	s The string to be split
 *	@param	c The delimiter character
 *	@return char** Returns a matrix of two splitted arrays,
 *			else returns NULL if allocation fails. */
char	**ft_split(char const *s, char c);

/**	@brief	Allocates (with malloc(3)) and returns a string representing the
 *			integer received as an argument. Negative numbers must be handled.
 *	@param	n The integer to convert
 *	@return	char* Returns the string representing the integer.
 *			NULL if the allocation fails.*/
char	*ft_itoa(int n);

/**	@brief	Applies the function ’f’ to each character of the string ’s’
 *			to create a new string (with malloc(3)) resulting from
 *			successive applications of ’f’.
 *	@param	s The string on which to iterate
 *	@param	f The function to apply to each characte
 *	@return	char* The string created from the successive applications of ’f’.
 * 			Returns NULL if the allocation fails. */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**	@brief	Applies the function f to each character of the string passed as
 *			argument, and passing its index as first argument. Each character
 *			is passed by address to f to be modified if necessary.
 *	@param	The string on which to iterate.
 *	@param	The function to apply to each character.
 *	@return value None. */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// 	put		********************************************************************

/**	@brief	Outputs the character ’c’ to the given filedescriptor.
 *	@param	c	The character to output
 *	@param	fd	The file descriptor on which to write */
void	ft_putchar_fd(char c, int fd);

/**	@brief	Outputs the string ’s’ to the given filedescriptor.
 *	@param	s	The string to output
 *	@param	fd	The file descriptor on which to write */
void	ft_putstr_fd(char *s, int fd);

/**	@brief	Outputs the string ’s’ to the given filedescriptor,
 *			followed by a newline.
 *	@param	s	The string to output
 *	@param	fd	The file descriptor on which to write */
void	ft_putendl_fd(char *s, int fd);

/**	@brief Outputs the integer ’n’ to the given filedescriptor.
 *	@param n	The integer to output
 *	@param fd	The file descriptor on which to write */
void	ft_putnbr_fd(int n, int fd);

// additional	***********************************************************

char	*ft_convert_base(size_t n, char *base);
char	*ft_uitoa(unsigned int n);

/* ********************************* BONUS ********************************** */

/**	@brief	Allocates and returns a new element of t_list. with the value of
 * 			CONTENT and the variable NEXT is initialized to NULL.
 *	@param	content the string to be created to the new t_list.
 *	@return	returns the address of the new t_list element. */
t_list	*ft_lstnew(void *content);

/**	@brief	Add a new element to the start of the linked list appointed by lst.
 *	@param	lst list of address of t_lists.
 *	@param	new elemt to be add to the start of the LST. */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**	@brief	find the length of the linked list appointed by LST
 *	@param	lst linked list to be count.
 *	@return	length of LST */
int		ft_lstsize(t_list *lst);

/**	@brief	find the last element of the linked list.
 *	@param	lst address of a linked list.
 *	@return	the address of the linked list. */
t_list	*ft_lstlast(t_list *lst);

/**	@brief	add a new element to the linked list in the end.
 *	@param	lst appointed a linked list.
 *	@param	new the new element to be added. */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**	@brief	aplies the function DEL to the LST and them free the LST.
 *	@param	lst linked element to be deleted and free.
 *	@param	del function to delete the element. */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**	@brief	applies the del function to the all elements of the linked list and
 * 			the free all
 *	@param	lst list be clear and deleted.
 *	@param	del functions to delete the elements. */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**	@brief	Iterates the list ’lst’ and applies the function ’f’ to the content
 * 			of each element.
 *	@param	lst The address of a pointer to an element.
 *	@param	f	The address of the function used to iterate on the list. */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**	@brief	Iterates the list ’lst’ and applies the function ’f’ to the content
 * 			of each element. Creates a new list resulting of the successive
 * 			applications of the function ’f’.
 *	@param	lst The address of a pointer to an element.
 *	@param	f	The address of the function used to iterate on the list.
 *	@param	del The address of the function used to delete the content of an
 * 			element if needed.
 *	@return	The new list. NULL if the allocation fails. */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif