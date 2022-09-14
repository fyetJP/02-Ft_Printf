/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:31:05 by jpires-p          #+#    #+#             */
/*   Updated: 2021/12/07 19:49:00 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;

	if (!lst)
		return ((t_list *) NULL);
	new_lst = ft_lstnew(f(lst->content));
	temp = new_lst;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = ft_lstnew(f(lst->content));
		temp = temp->next;
		if (!temp)
		{
			ft_lstclear(&new_lst, del);
			return ((t_list *) NULL);
		}
	}
	return (new_lst);
}
