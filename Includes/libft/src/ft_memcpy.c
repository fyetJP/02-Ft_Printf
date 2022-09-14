/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:34:24 by jpires-p          #+#    #+#             */
/*   Updated: 2021/12/07 16:55:01 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*buffer;
	const unsigned char	*p_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	buffer = dst;
	p_src = src;
	i = 0;
	while (i < n)
	{
		buffer[i] = p_src[i];
		i++;
	}
	return (dst);
}
