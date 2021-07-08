#include "ft_printf.h"

/*	while (*format)
			switch(*format++) {
			case 's':                       строка
**					s = va_arg(ap, char *);
					printf("строка %s\n", s);
					break;
			case 'd':                       целое 
					d = va_arg(ap, int);
					printf("целое %d\n", d);
					break;
			case 'c':                       символ 
					необходимо указание типов, т.к. va_arg
					воспринимает только полностью определенные типы 
					c = (char) va_arg(ap, int);
					printf("символ %c\n", c);
					break;
			}
	// for(char *c = format;*c; c++)
    // {
    //     if(*c!='%')
    //     {
    //         printf("%c", *c);
    //         continue;
    //     }
    //     switch(*++c)
    //     {
    //         case 'd': 
    //             d = va_arg(factor, int);
    //             printf("%d", d);
    //             break;
    //         case 'f': 
    //             f = va_arg(factor, double);
    //             printf("%.2lf", f);
    //             break;
    //         default:
    //             printf("%c", *c);
    //     }
    // }
*/

/*
** Verify if whatever is in the stack, has a newline. If it doesn't, returns
** a zero (0) to indicate that it's not valid. If there is a newline, we make a
** copy of the stack into the line, and we copied whatever was in the stack
** before, back to the stack (with the temporary stack that we created).
*/

//printf
int	ft_printf(const char *format_string, ...)
{
	int		lenght;
	va_list	ap;
	char	*arg;

	va_start(ap, format_string);
	while (*format_string)
	{
		if (format_string != '%')
			ft_putchar(&format_string);
		else
			arg = va_arg(ap, char);
		format_string++;
	}
	va_end (ap);
	return (lenght);
}
