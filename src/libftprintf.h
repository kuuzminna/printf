#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "../libft/libft.h"
# include <unistd.h> // for write
# include <stdlib.h> // for malloc
# include <stdarg.h> // for va_list

int	ft_printf(const char *format_string, ...);
int	ft_nlen(int n);
int	ft_nlenX(unsigned int n);
int	ft_print_char(va_list ap);
int	ft_print_int(va_list ap);
int	ft_print_string(va_list ap);
int	ft_print_unsigned_int(va_list ap);
int	ft_print_pointer(va_list ap);
int	ft_print_x(va_list ap);
int	ft_print_xx(va_list ap);

#endif