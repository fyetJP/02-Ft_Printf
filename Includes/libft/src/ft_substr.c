/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:46:27 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 17:46:32 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i[2];
	char	*dst;

	if (!s)
		return ((char *) NULL);
	if (start > ft_strlen(s))
	{
		start = ft_strlen(s);
		len = 0;
	}
	if (len >= ft_strlen(s))
	{
		len = ft_strlen(s) - start;
	}
	dst = (char *)malloc(((len + 1) * sizeof(char)));
	if (!dst)
		return ((char *) NULL);
	i[0] = 0;
	i[1] = start;
	while (i[0] < len && s[i[1]] != '\0')
		dst[i[0]++] = s[i[1]++];
	dst[i[0]] = '\0';
	return (dst);
}
