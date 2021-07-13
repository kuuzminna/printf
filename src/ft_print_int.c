#include "libftprintf.h"

int	ft_print_int(va_list ap)
{
	int		n;

	n = va_arg(ap, int);
	ft_putnbr_fd(n, 1);
	return (ft_nlen(n));
}
