#include "ft_printf.h"

void	ft_putchar(char c) //вывод символа
{
	write(1, &c, 1);
}

void	ft_putstr(char *s) //вывод строки
{
	int	i;

	i = 0;
	if (s)
		while (s[i] != '\0')
			write(1, &s[i++], 1);
}

size_t	ft_strlen(const char *str) //длина строки
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_numlen(long long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*srt;

	i = 0;
	srt = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!srt)
		return (NULL);
	while (src[i])
	{
		srt[i] = src[i];
		i++;
	}
	srt[i] = '\0';
	return (srt);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_numlen(n);
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}