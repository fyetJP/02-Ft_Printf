/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:39:40 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/11 20:25:19 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_conv_d(const char *fmt, va_list ap, int len, int fd)
{
	int					n;
	unsigned long long	u;

	n = va_arg(ap, int);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		len++;
		u = (unsigned)-n;
	}
	else
		u = n;
	len += ft_put_nbr_u_fd(fd, u);
	return (ft_printf_aux(fmt, ap, len));
}
