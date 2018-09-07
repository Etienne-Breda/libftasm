/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:13:09 by ebreda            #+#    #+#             */
/*   Updated: 2015/02/12 18:24:58 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFF_SIZE 8

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t ncmp);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nbr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isblank(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	**ft_strsplit_ft(char const *s, int (*f)(int));
char	*ft_itoa(int n);
size_t	ft_putchar(const char c);
size_t	ft_putstr(const char *s);
size_t	ft_putendl(const char *s);
size_t	ft_putnbr(int n);
size_t	ft_puttab(char **tab);
size_t	ft_putchar_fd(const char c, int fd);
size_t	ft_putstr_fd(const char *s, int fd);
size_t	ft_putendl_fd(const char *s, int fd);
size_t	ft_putnbr_fd(int n, int fd);
size_t	ft_puttab_fd(char **tab, int fd);
void	ft_strcut_before(char *str, size_t n);
size_t	ft_putbase(long long int n, size_t base, short maj);
size_t	ft_putbase_fd(long long int n, size_t base, short maj, int fd);
int		ft_get_next_line(int const fd, char **line);
size_t	ft_printf(char *str, ...);
size_t	ft_tablen(char **tab);
char	**ft_tabdup(char **tab);

#endif
