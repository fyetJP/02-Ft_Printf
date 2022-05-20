/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:38:32 by jpires-p          #+#    #+#             */
/*   Updated: 2021/12/07 18:01:57 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	word_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	i[3];
	char	**ret;

	ret = (char **)malloc(((word_count(s, c) + 1) * sizeof(char *)));
	if (!ret)
		return ((char **) NULL);
	i[0] = 0;
	i[1] = 0;
	while (i[0] < ft_strlen(s) && i[1] < (size_t)word_count(s, c))
	{
		if ((char)s[i[0]] == c)
			i[0]++;
		else
		{
			i[2] = i[0];
			while ((char)s[i[0]] != c && s[i[0]] != '\0')
				i[0]++;
			ret[i[1]] = ft_substr(s, i[2], (i[0] - i[2]));
			i[1]++;
		}
	}
	ret[i[1]++] = (char *) NULL;
	return (ret);
}

static unsigned int	word_count(char const *s, char c)
{
	unsigned int	num;

	num = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break ;
		while (*s != c && *s)
			s++;
		num++;
	}
	return (num);
}
