/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:11:55 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/26 18:51:06 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

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
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int i, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(char *s, int c);
size_t	ft_strlcpy(char *st1, const char *st2, size_t n);
char	*ft_strrchr(char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dest, char *cat, size_t n);
char	*ft_strnstr(const char *dest, const char *sr, size_t n);
size_t	ft_atoi(const char *st);
void	*ft_bzero(const char *st, size_t n);
void	*ft_memcpy(void *dest, const void *cpy, size_t n);
void	*ft_memmove(void *dest, const void *mv, size_t n);
void	*ft_memchr(const void *st, int ch, size_t n);
int		ft_memcmp(const char *st1, const char *st2, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *st, unsigned int start, size_t ln);
char	*ft_strjoin(char const *sf, char const *ss);
t_list	*ft_lstnew(void *content);
#endif
