#include "libftprintf.h"

static int	ft_nlenP(unsigned long long n)
{
	int	lenght;

	lenght = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		lenght++;
	}
	return (lenght);
}

static void	ft_putnbrP_fd(unsigned long long n, int fd)
{
	if (n >= 16)
	{
		ft_putnbrP_fd(n / 16, fd);
		ft_putnbrP_fd(n % 16, fd);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd(n + '0', fd);
		else
			ft_putchar_fd(n - 10 + 'a', fd);
	}
}

int	ft_print_pointer(va_list ap)
{
	void	*p;
	int		lenght;

	p = va_arg(ap, void *);
	ft_putstr_fd("0x", 1);
	lenght = 2;
	ft_putnbrP_fd((unsigned long long) p, 1);
	lenght += ft_nlenP((unsigned long long) p);
	return (lenght);
}
