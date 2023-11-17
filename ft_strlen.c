/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:03:40 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 14:34:39 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Finds out the length of the string s and returns it */

size_t	ft_strlen(const char *s)
{
	size_t	length;	

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
