/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:40:43 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 17:40:46 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i[2];
	size_t	len[2];
	char	*dst;

	if (!s1 || !s2)
		return ((char *) NULL);
	len[0] = ft_strlen(s1);
	len[1] = ft_strlen(s2);
	dst = (char *)malloc(((len[0] + len[1] + 1) * sizeof(char)));
	if (!dst)
		return ((char *) NULL);
	i[0] = -1;
	i[1] = 0;
	while (++i[0] < (len[0] + len[1]))
	{
		if (i[0] < len[0])
			dst[i[0]] = s1[i[0]];
		else
		{
			dst[i[0]] = s2[i[1]];
			i[1]++;
		}
	}
	dst[i[0]] = '\0';
	return (dst);
}
