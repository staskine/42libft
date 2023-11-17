/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:29:07 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 14:45:44 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Makes alphabetical letters from capital letters to lower case letters */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
