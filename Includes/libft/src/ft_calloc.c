/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:23:54 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 17:23:57 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*p_array;
	unsigned char	*str;
	size_t			tot_size_inc[2];

	tot_size_inc[0] = size * nmemb;
	p_array = (void *)malloc(tot_size_inc[0]);
	if (!p_array)
		return ((void *) NULL);
	str = p_array;
	tot_size_inc[1] = 0;
	while (tot_size_inc[1] < tot_size_inc[0])
	{
		str[tot_size_inc[1]] = (unsigned char)0;
		tot_size_inc[1]++;
	}
	return (p_array);
}
