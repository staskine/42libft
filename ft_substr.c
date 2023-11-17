/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:22:12 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 14:45:08 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function creates a new string using the input sent to it. Start is
the starting index and the len is how long the string can be. */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	index;

	str = (char *)malloc((len + 1) * sizeof(char));
	index = 0;
	if (!str)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_bzero(str, len));
	while (index < len && s[start] != '\0')
	{
		str[index] = s[start];
		index++;
		start++;
	}
	str[index] = '\0';
	return (str);
}
