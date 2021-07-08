#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> // for write
# include <stdlib.h> // for malloc
# include <stdarg.h> // for va_list

/* ------------------------------------------------------------------------**
** ------------------------------ Specifiers ------------------------------**
** ------------------------------------------------------------------------*/

/* ------------------------------ Specifiers ------------------------------*/

int ft_one_char(char chr);
int ft_string(char *str);
int ft_percent();
int ft_integer(int num);
int ft_unsigned(unsigned int num);

#endif