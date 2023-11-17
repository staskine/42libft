/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:09:01 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 12:55:31 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Clears a linked list with function that deletes all the content in a node.
Then we free the nodes */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clr;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		clr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = clr;
	}
	*lst = NULL;
}
