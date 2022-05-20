/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_oct_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:40:23 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/11 20:27:01 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

size_t	ft_put_oct_fd(int fd, unsigned int num)
{
	char	buf[12];

	buf[11] = '\0';
	ft_utoa(num, buf, 8);
	return (ft_put_str_fd(fd, buf));
}
