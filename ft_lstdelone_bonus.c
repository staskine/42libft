/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:31:46 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 12:56:21 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Deletes all the content from one node of the inputted linked list
and then frees the node */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (*del)
	{
		(*del)(lst->content);
	}
	free(lst);
}
