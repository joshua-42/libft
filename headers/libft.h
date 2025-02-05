/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:10 by jodougla          #+#    #+#             */
/*   Updated: 2025/02/05 11:24:41 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <math.h>
# include <stdarg.h>
# include <stdint.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define HEXA_UPPER "0123456789ABCDEF"
# define HEXA_LOWER "0123456789abcdef"
# define INT_MIN "-2147483648"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}					t_dlist;

bool	ft_isdigit(int c);
bool	ft_isalpha(int c);
bool	ft_isalnum(int c);
bool	ft_isascii(int c);
bool	ft_isprint(int c);
bool	ft_isspace(int c);
bool	ft_issign(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmeb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
float	ft_atof(char *str);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	push(void *malloc_adress);
void	dlst_addback(t_dlist **lst, t_dlist *node);
void	dlst_addfront(t_dlist **lst, t_dlist *node);
void	dlst_clear(t_dlist **lst, void (*del)(void *));
t_dlist	*dlst_last(t_dlist **lst);
int		dlst_len(t_dlist **lst);
t_dlist	*dlst_new(void *content);
void	ft_free(char **str);
void	free_cleanup_char(char **str);
void	close_fd(int num_fd, ...);

/*****************************************************************************/
/*																			 */	
/*		FT_PRINTF_FUNCTION													 */
/*																			 */
/*****************************************************************************/

int		ft_printf(const char *str, ...) __attribute__((format(printf, 1, 2)));
int		ft_check_the_string(va_list ap, const char *f_ptr, int len);
int		ft_printf(const char *str, ...);
int		ft_check_the_string(va_list ap, const char *str, int len);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putchar_hexa(unsigned int nb, int flag);
int		ft_putnbr_hexa(unsigned int nb, int flag);
int		ft_putunsigned_nbr(unsigned int nb);
int		ft_putnbr(int nb);
int		ft_putptr(unsigned long str);
int		ft_atoi_hexa(char *str);
int		ft_putnbr_mem(unsigned long nb, int flag);

/*****************************************************************************/
/*																			 */	
/*		FT_PRINTF_FUNCTION													 */
/*																			 */
/*****************************************************************************/

char	*get_next_line(int fd);
char	*ft_strnjoin(char *s1, char *s2, int len);

#endif
