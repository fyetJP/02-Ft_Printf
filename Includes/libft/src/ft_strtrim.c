/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:45:53 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 18:18:45 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	inc_len[3];

	if (!s1 || !set)
		return ((char *) NULL);
	inc_len[0] = 0;
	inc_len[1] = 0;
	inc_len[2] = ft_strlen(s1) - 1;
	while (set[inc_len[1]])
	{
		if (s1[inc_len[0]] != set[inc_len[1]]
			&& s1[inc_len[2]] != set[inc_len[1]])
			inc_len[1]++;
		if (s1[inc_len[0]] == set[inc_len[1]])
		{
			inc_len[0]++;
			inc_len[1] = 0;
		}
		if (s1[inc_len[2]] == set[inc_len[1]])
		{
			inc_len[2]--;
			inc_len[1] = 0;
		}
	}
	return (ft_substr(s1, inc_len[0], (inc_len[2] + 1) - inc_len[0]));
}
