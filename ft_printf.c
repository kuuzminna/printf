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

// --------------------
// --------------------
// --------------------

#include <stdio.h> // for printf
#include "ft_printf.h"
/*
** --------------------------flags--------------------------
								0
								-
								.
								*
*/

/*
** -------------------------- Specifiers ---------------------------------
*/

//specifiers c
int ft_one_char(char chr)
{
	ft_putchar(chr);
	return (1);
}
//specifiers s
int ft_string(char *str)
{
	ft_putstr(str);
	return (ft_strlen(str));
}
//specifiers %
int ft_percent()
{
	ft_putchar('%');
	return (1);
}
//specifiers d,i
int ft_integer(int num)
{
	char *str; //string
	
	str = ft_itoa(num);
	ft_putstr(str);
	return (ft_numlen(num)); 
}
//specifiers u
int ft_unsigned(unsigned int num)
{
	return (ft_numlen(num));
}
//printf
int ft_printf(const char *s, ...)
{
	va_list ap;
	char *name;
	unsigned int days;
	va_start(ap, s);
	name = va_arg(ap, char*);
	days = va_arg(ap, unsigned int);
	ft_putstr(name);
	ft_putnbr(days);
	va_end(ap);
	return (0);
}

int main()
{
	unsigned int a = -1;
	// printf("%d \n", a);
	// printf("%i", a);
	char c = 'a';
	printf("%c \n", c); 
	printf("%*c \n", 3, c); 
	printf("%.c ", c); 

	//printf("Hello %s! The deadline is in %u days.\n", "gfgf", 56);
}
