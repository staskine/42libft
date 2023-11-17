/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:19:50 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 13:09:39 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function copies using a forward copy method from src to dest. 
This function can not handle memory overlap */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str_src;
	unsigned char	*str_dest;
	size_t			i;

	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (n > i)
	{
		str_dest[i] = str_src[i];
		i++;
	}
	return (dest);
}
