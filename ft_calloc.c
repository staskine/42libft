/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:47:47 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 11:54:32 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This functions allocates a specified amount of memory and initializes
it to zero using ft_bzero. by doing this the user can cast a specified types
space. size can be sizeof(char), etc. */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	str = malloc(nmemb * size);
	if (!str)
		return (0);
	str = ft_bzero(str, nmemb * size);
	return (str);
}
