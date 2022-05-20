/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:26:59 by jpires-p          #+#    #+#             */
/*   Updated: 2021/12/07 19:19:00 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*itoa_str_alloc(long nbr, long len);

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr[2];

	nbr[0] = n;
	nbr[1] = 0;
	while (n)
	{
		nbr[1]++;
		n /= 10;
	}
	str = itoa_str_alloc(nbr[0], nbr[1]);
	if (!str)
		return (NULL);
	if (nbr[0] <= 0)
	{
		nbr[0] = -nbr[0];
		nbr[1]++;
	}
	str[nbr[1]] = '\0';
	while (nbr[1] && nbr[0] != 0)
	{
		str[--nbr[1]] = (nbr[0] % 10) + '0';
		nbr[0] /= 10;
	}
	return (str);
}

static char	*itoa_str_alloc(long nbr, long len)
{
	char	*str;

	if (nbr <= 0)
	{
		str = (char *)malloc((len + 2) * sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '-';
		if (nbr == 0)
			str[0] = '0';
	}
	else
	{
		str = (char *)malloc((len + 1) * sizeof(char));
		if (!str)
			return (NULL);
	}
	return (str);
}
