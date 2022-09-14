/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:36:07 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 17:36:11 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buffer;

	buffer = s;
	i = 0;
	while (i < n)
	{
		buffer[i] = (unsigned char)c;
		i++;
	}
	return ((void *)buffer);
}
