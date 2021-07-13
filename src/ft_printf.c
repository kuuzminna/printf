#include "libftprintf.h"

int	ft_nlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	else if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_nlenX(unsigned int n)
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

static int	lenght_spec(char c, va_list ap)
{
	if (c == 'c')
		return (ft_print_char(ap));
	else if (c == 's')
		return (ft_print_string(ap));
	else if (c == 'p')
		return (ft_print_pointer(ap));
	else if (c == 'x')
		return (ft_print_x(ap));
	else if (c == 'X')
		return (ft_print_xx(ap));
	else if (c == 'i' || c == 'd')
		return (ft_print_int(ap));
	else if (c == 'u')
		return (ft_print_unsigned_int(ap));
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else
		return (-1);
}

int	ft_printf(const char *format_string, ...)
{
	int		lenght;
	va_list	ap;

	lenght = 0;
	va_start(ap, format_string);
	while (*format_string)
	{
		if (*format_string != '%')
		{
			ft_putchar_fd(*format_string, 1);
			lenght++;
		}
		else
		{
			format_string++;
			lenght += lenght_spec(*format_string, ap);
		}
		format_string++;
	}
	va_end (ap);
	return (lenght);
}

// int	ft_printf(const char *format, ...)
// {
// 	int		lenght;
// 	int		i;
// 	va_list	ap;

// 	lenght = 0;
// 	i = -1;
// 	va_start(ap, format);
// 	while (format[i++] != 0)
// 	{
// 		if (format[i] != '%')
// 		{
// 			printf("hello\n");
// 			ft_putchar_fd(format[i], 1);
// 			lenght++;
// 		}
// 		else
// 		{
// 			lenght += lenght_spec(format[++i], ap);
// 			format++;
// 		}
// 	}
// 	va_end (ap);
// 	return (lenght);
// }
