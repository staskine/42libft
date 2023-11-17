/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:11:06 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 13:20:33 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function sets the memory of string s to be the character c (converted
from int). It writes len bytes */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*string;

	string = s;
	index = 0;
	while (index < n)
	{
		*string = (unsigned char)c;
		index++;
		string++;
	}
	return (s);
}
