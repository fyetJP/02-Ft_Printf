/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:39:25 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/11 20:25:15 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_conv_o(const char *fmt, va_list ap, int len, int fd)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	len += ft_put_oct_fd(fd, n);
	return (ft_printf_aux(fmt, ap, len));
}
