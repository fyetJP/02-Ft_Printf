/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_big_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:39:18 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/11 20:24:48 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_conv_big_x(const char *fmt, va_list ap, int len, int fd)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	len += ft_put_hex_fd(fd, n, 'X');
	return (ft_printf_aux(fmt, ap, len));
}
