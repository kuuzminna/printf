#include "libftprintf.h"

static int	ft_nlenU(unsigned int n)
{
	int	lenght;

	lenght = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		lenght++;
	}
	return (lenght);
}

static void	ft_putnbrU_fd(unsigned int n, int fd)
{
	if (n >= 10)
	{
		ft_putnbrU_fd(n / 10, fd);
		ft_putnbrU_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

int	ft_print_unsigned_int(va_list ap)
{
	int	n;

	n = va_arg(ap, unsigned int);
	ft_putnbrU_fd(n, 1);
	return (ft_nlenU(n));
}
