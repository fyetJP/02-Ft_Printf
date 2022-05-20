/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:40:09 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/13 01:47:10 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

size_t	ft_put_ptr_fd(int fd, long long unsigned int num)
{
	size_t	printed;
	char	buf[21];

	printed = 0;
	buf[20] = '\0';
	if (num == 0)
	{
		if (U_OS == A_OS || U_OS == W_OS)
			return (write(fd, "0x0", 3));
		else if (U_OS == L_OS)
			return (write(fd, "(nil)", 5));
		else
			return (write(fd, "0x0", 3));
	}
	ft_utoa(num, buf, 16);
	printed += write(fd, "0x", 2);
	printed += ft_put_str_fd(fd, buf);
	return (printed);
}
