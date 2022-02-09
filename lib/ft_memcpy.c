/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrapefr <ggrapefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:19:05 by ggrapefr          #+#    #+#             */
/*   Updated: 2022/02/09 11:19:06 by ggrapefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*c;

	if (!(dst) && !(src))
		return (NULL);
	d = (unsigned char *) dst;
	c = (unsigned char *) src;
	while (n--)
	{
		*d++ = *c++;
	}
	return (dst);
}
