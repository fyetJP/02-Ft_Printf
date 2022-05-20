/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:27:35 by jpires-p          #+#    #+#             */
/*   Updated: 2021/12/07 16:12:32 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newl)
{
	t_list	*temp;

	if (!lst || !newl)
		return ;
	if (!*lst)
	{
		*lst = newl;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = newl;
}
