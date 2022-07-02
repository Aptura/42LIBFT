/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:28:32 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/10 15:49:28 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *nptr);
int		ft_isalnum(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strcmp(char *s1, char *s2);
int		ft_isspace(char *str);
int		ft_lstsize(t_list *lst);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcat(char	*dest, char	*src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *src, const char *find, size_t n);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strstr(char *haystack, char *needle);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
void	*ft_memset(void *b, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memchr(const void *dst, int c, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);

#endif
