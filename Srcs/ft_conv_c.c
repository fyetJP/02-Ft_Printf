/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:39:54 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/11 20:25:00 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_conv_c(const char *fmt, va_list ap, int len, int fd)
{
	int	c;

	c = va_arg(ap, int);
	ft_putchar_fd(c, fd);
	len++;
	return (ft_printf_aux(fmt, ap, len));
}
