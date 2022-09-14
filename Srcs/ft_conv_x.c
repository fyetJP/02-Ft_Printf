/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:39:05 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/11 20:26:11 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_conv_x(const char *fmt, va_list ap, int len, int fd)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	len += ft_put_hex_fd(fd, n, 'x');
	return (ft_printf_aux(fmt, ap, len));
}
