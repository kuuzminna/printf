#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> // for write
# include <stdlib.h> // for malloc
# include <stdarg.h> // for va_list

int	ft_printf(const char *format_string, ...);
int	ft_print_int(int n);
int	ft_print_char(char chr);
int	ft_print_string(char *str);
int	ft_print_unsigned_int(unsigned int num);

#endif