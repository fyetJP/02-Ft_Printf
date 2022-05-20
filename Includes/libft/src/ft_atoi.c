/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:05:30 by jpires-p          #+#    #+#             */
/*   Updated: 2021/12/07 17:40:32 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	neg;

	neg = 1;
	res = 0;
	while (*nptr && ((*nptr >= 9 && *nptr <= 13) || *nptr == 32))
		++nptr;
	if (*nptr == '-')
		neg = -1;
	if (*nptr == '-' || *nptr == '+')
		++nptr;
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - 48);
		++nptr;
	}
	return (res * neg);
}
