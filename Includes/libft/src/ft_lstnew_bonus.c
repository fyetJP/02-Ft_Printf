/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:31:31 by jpires-p          #+#    #+#             */
/*   Updated: 2021/12/07 16:18:36 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newel;

	newel = (t_list *)malloc(sizeof(*newel));
	if (!newel)
		return ((t_list *) NULL);
	newel->content = content;
	newel->next = (t_list *) NULL;
	return (newel);
}
