/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func_handlers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:40:53 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/12 04:55:57 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

t_print_conv_f	*ft_init_print_layout(void)
{
	t_print_conv_f	*p_arr;

	p_arr = ft_init_conv_arr();
	p_arr['c'] = ft_conv_c;
	p_arr['s'] = ft_conv_s;
	p_arr['p'] = ft_conv_p;
	p_arr['d'] = ft_conv_d;
	p_arr['i'] = ft_conv_d;
	p_arr['u'] = ft_conv_u;
	p_arr['o'] = ft_conv_o;
	p_arr['x'] = ft_conv_x;
	p_arr['X'] = ft_conv_big_x;
	p_arr['%'] = ft_conv_percent;
	return (p_arr);
}

t_print_conv_f	*ft_init_conv_arr(void)
{
	static t_print_conv_f	arr[256];
	t_print_conv_f			*p_arr;
	size_t					i;
	size_t					c_size;

	i = 0;
	c_size = 256;
	p_arr = arr;
	if (!p_arr)
		return ((t_print_conv_f *) NULL);
	while (i < c_size)
	{
		p_arr[i] = (t_print_conv_f) NULL;
		i++;
	}
	return (p_arr);
}
