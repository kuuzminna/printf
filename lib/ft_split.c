/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrapefr <ggrapefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:19:22 by ggrapefr          #+#    #+#             */
/*   Updated: 2022/02/09 11:19:23 by ggrapefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words_len(char const *s, char ch)
{
	size_t		i;

	i = 0;
	while (s[i] != ch && s[i] != '\0')
		i++;
	return (i);
}

static size_t	ft_word_count(char const *s, char ch)
{
	size_t		i;
	size_t		count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != ch && (s[i + 1] == ch || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	*ft_make_free(char **new, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(new[i]);
		i++;
	}
	free(new);
	return (NULL);
}

static char	**ft_splitter(char const *s, size_t count, char ch, char **new)
{
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	while (i < count)
	{
		while (*s == ch)
			s++;
		len = ft_words_len(s, ch);
		new[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!new[i])
			return (ft_make_free(new, i));
		j = 0;
		while (j < len)
			new[i][j++] = *s++;
		new[i][j] = '\0';
		i++;
	}
	new[i] = NULL;
	return (new);
}

char	**ft_split(char const *s, char ch)
{
	char	**new;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_word_count(s, ch);
	new = (char **)malloc(sizeof(char *) * (count + 1));
	if (!new)
		return (NULL);
	new = ft_splitter(s, count, ch, new);
	return (new);
}
