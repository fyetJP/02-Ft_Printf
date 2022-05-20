/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:29:51 by jpires-p          #+#    #+#             */
/*   Updated: 2021/12/07 16:15:24 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*newlst;

	if (!lst || !f)
		return ;
	newlst = lst;
	while (newlst)
	{
		f(newlst->content);
		newlst = newlst->next;
	}
}
