/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:41:24 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/24 17:44:39 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		str_len[2];
	size_t		inc[2];

	str_len[0] = ft_strlen(src);
	str_len[1] = ft_strlen(dst);
	if (size <= str_len[1])
		return (size + str_len[0]);
	inc[0] = str_len[1];
	inc[1] = 0;
	while (src[inc[1]] != '\0' && inc[0] + 1 < size)
	{
		dst[inc[0]] = src[inc[1]];
		inc[0]++;
		inc[1]++;
	}
	dst[inc[0]] = '\0';
	return (str_len[1] + str_len[0]);
}
