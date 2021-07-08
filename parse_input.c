#include "ft_printf.h"

int	parse(int lenght)
{
	if (c == 'c')
		return (lenght + ft_print_char(char chr));
	if (c == 'h')
		return (lenght + ft_print_hex());
	if (c == 'H')
		return (lenght + ft_print_Hex());
	if (c == 'i')
		return (lenght + ft_print_int(int num));
	if (c == 'p')
		return (lenght + ft_print_pointer());
	if (c == 's')
		return (lenght + ft_print_string(char *str));
	if (c == 'u')
		return (lenght + ft_print_unsigned_int(unsigned int num));
}
