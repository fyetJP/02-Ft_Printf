/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:40:39 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/11 20:26:49 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

size_t	ft_put_nbr_fd(int fd, int num)
{
	char	buf[11];
	char	*p_buf;
	int		i;

	i = 0;
	buf[10] = '\0';
	p_buf = ft_strdup(ft_itoa(num));
	while (*p_buf != '\0' || i < 10)
		buf[i++] = *p_buf++;
	free(p_buf);
	return (ft_put_str_fd(fd, buf));
}
