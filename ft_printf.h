#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h> // for write
#include <stdlib.h> // for malloc
#include <stdarg.h> // for va_list

/*
** --------------------------------LIBFT FUNC----------------- **
*/
void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
int		ft_numlen(long long n);
char	*ft_strdup(const char *src);
char	*ft_itoa(int n);

/*
** --------------------------------SPECIFIERS ----------------- **
*/
int ft_one_char(char chr);
int ft_string(char *str);
int ft_percent();
int ft_integer(int num);
int ft_unsigned(unsigned int num);

#endif