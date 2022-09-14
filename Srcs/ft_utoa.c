/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:31:50 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/12 05:08:50 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

static char	*ft_put_zero_str(char *result)
{
	if (!result)
		return ((char *) NULL);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

static void	ft_get_valid_utoa_char(unsigned int *ascii_c,
						unsigned int *iter, unsigned int *size)
{
	if (*ascii_c < 'a' && *ascii_c > '9' && *iter <= (*size / 2))
		*ascii_c = '9';
	else if (*ascii_c < 'a' && *ascii_c > '9' && *iter >= (*size / 2))
		*ascii_c = 'a';
	if (*ascii_c < '0')
		*ascii_c = '1';
}

static void	ft_reverse_utoa_ptr(char *ptr, char *ptr1)
{
	char	temp_c;

	while (ptr1 < ptr)
	{
		temp_c = *ptr;
		*ptr-- = *ptr1;
		*ptr1++ = temp_c;
	}
}

char	*ft_init_digit_map(void)
{
	char			*out;
	unsigned int	size;
	unsigned int	ascii_c;
	unsigned int	i;

	size = 72;
	out = ft_oom_guard((char *)malloc(size * sizeof(char)));
	out[71] = '\0';
	ascii_c = 122;
	i = 0;
	while (i < 71)
	{
		ft_get_valid_utoa_char(&ascii_c, &i, &size);
		out[i] = (char)ascii_c;
		if (i < (size / 2))
			ascii_c--;
		else
			ascii_c++;
		i++;
	}
	return (out);
}

char	*ft_utoa(long long unsigned int value, char *result, unsigned int radix)
{
	long long unsigned int	temp_value;
	char					*digit_map;
	char					*ptr;
	char					*ptr1;

	ptr1 = result;
	ptr = ptr1;
	if (radix < 2 || radix > 36)
		return ((char *) NULL);
	if (value == 0)
		return (ft_put_zero_str(result));
	digit_map = ft_init_digit_map();
	while (value)
	{
		temp_value = value;
		value /= radix;
		*ptr++ = digit_map[35 + (temp_value - value * radix)];
	}
	*ptr-- = '\0';
	ft_reverse_utoa_ptr(ptr, ptr1);
	free(digit_map);
	return (result);
}
