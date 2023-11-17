/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:51:08 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 13:43:23 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function joins two strings s1 and s2 and creates a new string */

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	char			*dest;
	unsigned int	i_s;
	unsigned int	i_dest;

	len = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	i_s = 0;
	i_dest = 0;
	if (!dest)
		return (NULL);
	while (s1[i_dest] != '\0')
	{
		dest[i_dest] = s1[i_dest];
		i_dest++;
	}
	while (s2[i_s] != '\0')
	{
		dest[i_dest] = s2[i_s];
		i_dest++;
		i_s++;
	}
	dest[i_dest] = '\0';
	return (dest);
}
