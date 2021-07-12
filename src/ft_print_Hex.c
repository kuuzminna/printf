#include "ft_printf.h"

int	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar_fd('-');
		if (n == -2147483648)
		{
			ft_putchar_fd('2');
			ft_putnbr_fd(147483648);
		}
		else
			ft_putnbr_fd(-n);
	}
	else if (n >= 16)
	{
		ft_putnbr_fd(n / 16;
		ft_putnbr_fd(n % 16);
	}
	else
		ft_putchar_fd(n + '0');
}


int	ft_print_Hex(void *p)
{
	int	lenght;

	lenght = ft_print_int(0);
	lenght += ft_print_char('x');
	num
}
