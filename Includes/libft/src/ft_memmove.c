/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:35:18 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 17:35:23 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			step;
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	if (dst == NULL && src == NULL)
		return (NULL);
	step = +1;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst > src)
	{
		step = -1;
		dest = (unsigned char *)(dst + n - 1);
		source = (unsigned char *)(src + n - 1);
	}
	i = 0;
	while (i < n)
	{
		*dest = *source;
		dest += step;
		source += step;
		i++;
	}
	return (dst);
}
