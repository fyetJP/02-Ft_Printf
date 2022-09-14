/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:56:24 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/11 20:29:37 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_printf_aux(const char *fmt, va_list ap, int len)
{
	int				c;
	int				fd;
	t_print_conv_f	*ft_print_conv;

	fd = 1;
	ft_print_conv = ft_init_print_layout();
	while (*fmt != '\0')
	{
		c = (unsigned char)*fmt++;
		if (c != '%')
			len += ft_put_char_fd(fd, c);
		else
		{
			c = (unsigned char)*fmt++;
			if (ft_print_conv[c] == NULL)
			{
				if (c == '\0')
					break ;
				len += ft_put_char_fd(fd, c);
			}
			else
				return (ft_print_conv[c](fmt, ap, len, fd));
		}
	}
	return (len);
}

int	ft_vprintf(const char *fmt, va_list ap, int len)
{
	return (ft_printf_aux(fmt, ap, len));
}

int	ft_printf(const char *format, ...)
{
	int		done;
	va_list	args;

	done = 0;
	va_start(args, format);
	done = ft_vprintf(format, args, done);
	va_end(args);
	return (done);
}
