#include "ft_prinf.h"

int	ft_printf(const char *, ...)
{
	int	lenght;
	va_list ap;

	i = 0;
	va_start(ap, format);
	while (i++ < format)
	{
		va_arg(ap,double);// получаем значение текущего параметра типа int
	}
	
	while (*format)
			switch(*format++) {
			case 's':                       /* строка */
					s = va_arg(ap, char *);
					printf("строка %s\n", s);
					break;
			case 'd':                       /* целое */
					d = va_arg(ap, int);
					printf("целое %d\n", d);
					break;
			case 'c':                       /* символ */
					/* необходимо указание типов, т.к. va_arg
					воспринимает только полностью определенные типы */
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
	va_end (ap);
	return(lenght);
}
