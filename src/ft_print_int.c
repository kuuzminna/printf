#include "ft_printf.h"

int	ft_print_int(int n)
{
	char	*str;

	str = ft_itoa(n);
	ft_putstr(str);
	return (ft_nlen(n));
}
