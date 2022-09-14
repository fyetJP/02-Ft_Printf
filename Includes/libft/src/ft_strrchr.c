/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:45:28 by jpires-p          #+#    #+#             */
/*   Updated: 2021/12/07 17:11:54 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		to_find;
	const char	*p_last_ocu;

	to_find = (char)c;
	p_last_ocu = (const char *) NULL;
	while (*s != '\0')
	{
		if (*s == to_find)
			p_last_ocu = s;
		s++;
	}
	if (to_find == '\0')
		p_last_ocu = s;
	return ((char *)p_last_ocu);
}
