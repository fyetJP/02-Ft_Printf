/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:40:46 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/11 20:31:30 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

size_t	ft_put_str_fd(int fd, const char *str)
{
	size_t	printed;

	printed = 0;
	if (!str)
		return (write(fd, "(null)", 6));
	else
	{
		while (str[printed] != '\0')
			printed += write(fd, &str[printed], sizeof(char));
	}
	return (printed);
}
