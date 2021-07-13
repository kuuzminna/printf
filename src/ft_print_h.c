#include "libftprintf.h"

static void	ft_putnbrX_fd(unsigned int n, int fd)
{
	if (n >= 16)
	{
		ft_putnbrX_fd(n / 16, fd);
		ft_putnbrX_fd(n % 16, fd);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd(n + '0', fd);
		else
			ft_putchar_fd(n - 10 + 'a', fd);
	}
}

int	ft_print_x(va_list ap)
{
	int				lenght;
	unsigned int	x;

	x = va_arg(ap, unsigned int);
	ft_putnbrX_fd(x, 1);
	lenght = ft_nlenX(x);
	return (lenght);
}
