/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:24:16 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 17:24:32 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	flag;

	if (!((c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122)))
		return (0);
	else if (c >= 65 && c <= 90)
		flag = 1;
	else
		flag = 2;
	return (flag);
}
