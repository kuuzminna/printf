#include "libftprintf.h"

static void	ft_putnbrXX_fd(unsigned int n, int fd)
{
	if (n >= 16)
	{
		ft_putnbrXX_fd(n / 16, fd);
		ft_putnbrXX_fd(n % 16, fd);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd(n + '0', fd);
		else
			ft_putchar_fd(n - 10 + 'A', fd);
	}
}

int	ft_print_xx(va_list ap)
{
	int				lenght;
	unsigned int	xx;

	xx = va_arg(ap, unsigned int);
	ft_putnbrXX_fd(xx, 1);
	lenght = ft_nlenX(xx);
	return (lenght);
}
