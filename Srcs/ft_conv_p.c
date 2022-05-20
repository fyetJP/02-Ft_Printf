/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:38:54 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/11 20:28:34 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_conv_p(const char *fmt, va_list ap, int len, int fd)
{
	long long unsigned int	n;
	const void				*ptr;

	ptr = va_arg(ap, const void *);
	n = (long long unsigned int)ptr;
	ptr = (const void *) NULL;
	len += ft_put_ptr_fd(fd, n);
	return (ft_printf_aux(fmt, ap, len));
}
