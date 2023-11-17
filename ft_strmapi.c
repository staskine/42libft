/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:52:10 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 14:36:18 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Makes a new string based on the function f being applied to string s
abnd returns it. This preserves the original string */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		str[i] = f(i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
