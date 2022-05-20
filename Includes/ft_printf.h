/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:51:19 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/12 05:06:03 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define A_OS 65
# define L_OS 76
# define W_OS 87

# ifdef __APPLE__
#  define U_OS 65
# elif __WIN32
#  define U_OS 87
# elif __linux__
#  define U_OS 76
# else
#  define U_OS 1
# endif 

# include	<stdarg.h>
# include	"libft/includes/libft.h"

typedef int	(*t_print_conv_f)(const char *fmt, va_list ap, int len, int fd);

/*
** %[flags][width][.precision][length modifier]conversion
*/
typedef struct s_pf_info
{
	va_list	args;
	char	conv;
	int		skip;
	int		width;
	int		prec;
	int		zero;
	int		point;
	int		dash;
	int		total_l;
	int		sign;
	int		is_zero;
	int		perc;
	int		spc;
	int		alt;
}	t_info;

/*
**ft_printf.c functions
*/

int				ft_printf(const char *format, ...);
int				ft_vprintf(const char *fmt, va_list ap, int len);
int				ft_printf_aux(const char *fmt, va_list ap, int len);

/*
** ft_printf_func_handlers.c functions
*/

t_print_conv_f	*ft_init_print_layout(void);
t_print_conv_f	*ft_init_conv_arr(void);

/*
** ft_utoa.c functions
*/

char			*ft_utoa(long long unsigned int value,
					char *result, unsigned int radix);
char			*ft_init_digit_map(void);

/*
** ft_str_toupper.c
*/

char			*ft_str_toupper(char *str);

/*
** ft_put_str_fd.c
*/

size_t			ft_put_str_fd(int fd, const char *str);

/*
** ft_put_char_fd.c
*/

size_t			ft_put_char_fd(int fd, const char c);

/*
** ft_put_nbr_fd.c
*/

size_t			ft_put_nbr_fd(int fd, int num);

/*
** ft_put_nbr_u_fd.c
*/

size_t			ft_put_nbr_u_fd(int fd, unsigned int num);

/*
** ft_put_oct_fd.c
*/

size_t			ft_put_oct_fd(int fd, unsigned int num);

/*
** ft_put_hex_fd.c
*/

size_t			ft_put_hex_fd(int fd, unsigned int num, char flag);

/*
** ft_put_ptr_fd.c
*/

size_t			ft_put_ptr_fd(int fd, long long unsigned int num);

/*
** ft_conv_percent.c
*/

int				ft_conv_percent(const char *fmt, va_list ap, int len, int fd);

/*
** ft_conv_c.c
*/

int				ft_conv_c(const char *fmt, va_list ap, int len, int fd);

/*
** ft_conv_s.c
*/

int				ft_conv_s(const char *fmt, va_list ap, int len, int fd);

/*
** ft_conv_d.c
*/

int				ft_conv_d(const char *fmt, va_list ap, int len, int fd);

/*
** ft_conv_u.c
*/

int				ft_conv_u(const char *fmt, va_list ap, int len, int fd);

/*
** ft_conv_o.c
*/

int				ft_conv_o(const char *fmt, va_list ap, int len, int fd);

/*
** ft_conv_x.c
*/

int				ft_conv_x(const char *fmt, va_list ap, int len, int fd);

/*
** ft_conv_big_x.c
*/

int				ft_conv_big_x(const char *fmt, va_list ap, int len, int fd);

/*
** ft_conv_p.c
*/

int				ft_conv_p(const char *fmt, va_list ap, int len, int fd);

/*
** ft_helper_utils.c
*/

void			*ft_oom_guard(void *p);

#endif
