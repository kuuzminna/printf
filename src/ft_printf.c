#include "ft_printf.h"

static int	lenght_spec(char c, va_list ap)
{
	if (c == 'c')
		return (ft_print_char(va_arg(ap, int)));
	if (c == 's')
		return (ft_print_string(va_arg(ap, char *)));
	// if (c == 'p')
	// 	return (ft_print_pointer(va_arg(ap, void *)));
	if (c == 'h')
		return (ft_print_hex(va_arg(ap, int)));
	if (c == 'H')
		return (ft_print_Hex(va_arg(ap, int)));
	if (c == 'i' || c == 'd')
		return (ft_print_int(va_arg(ap, int)));
	if (c == 'u')
		return (ft_print_unsigned_int(va_arg(ap, int)));
	if (c == '%')
		return (ft_print_char(va_arg(ap, int)));
	return (-1);
}

int	ft_printf(const char *format_string, ...)
{
	int		lenght;
	// char	*arg;
	va_list	ap;

	// lenght = 0;
	va_start(ap, format_string);
	// while (*format_string)
	// {
	// 	if (*format_string != '%')
	// 	{
	// 		ft_putchar_fd(*format_string, 1);
	// 		lenght++;
	// 	}
	// 	else
	// 	{
	// 		arg = va_arg(ap, char);//
	// 		lenght += lenght_spec(arg, ap);//
	// 	}
	// 	format_string++;
	// }
	lenght = ft_parse(ap, format_string);
	va_end (ap);
	return (lenght);
}
