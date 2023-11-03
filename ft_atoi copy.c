/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:35:55 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/02 11:45:30 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned int	number;
	int				index;
	int				sign;

	number = 0;
	index = 0;
	sign = 1;
	if (str[index] == '\0')
		return (0);
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\f'
		|| str[index] == '\r' || str[index] == '\v' || str[index] == '\n')
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] <= '9' && str[index] >= '0')
	{
		number = number * 10 + str[index] - '0';
		index++;
	}
	return ((int)number * sign);
}
