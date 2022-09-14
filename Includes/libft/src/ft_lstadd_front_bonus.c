/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:28:06 by jpires-p          #+#    #+#             */
/*   Updated: 2021/12/07 16:11:38 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *newl)
{
	if (!newl || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = newl;
		return ;
	}
	newl->next = *lst;
	*lst = newl;
}
