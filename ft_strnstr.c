/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:09:23 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 14:39:12 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function finds the needle in the haystack so to speak. It finds out if 
string nd is present in string hs. It looks till index len for hs. It then 
either returns the location on string hs or null if not found */

char	*ft_strnstr(const char *hs, const char *nd, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!hs && len == 0)
		return (NULL);
	if (nd[j] == '\0')
		return ((char *)hs);
	while (hs[i] != '\0' && len > i)
	{
		while (nd[j] == hs[i + j] && hs[i + j] != '\0' && (j + i) < len)
		{
			j++;
			if (nd[j] == '\0')
				return ((char *)&hs[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
