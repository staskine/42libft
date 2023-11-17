/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:02:30 by sataskin          #+#    #+#             */
/*   Updated: 2023/11/17 13:40:19 by sataskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This is a function that splits a string into an array of strings based on
the delimiter char c Ths first function finds the amount of strings that are
going to be made */

static size_t	ft_wordcount(char const *str, char c)
{
	size_t	num;
	size_t	i;

	num = 0;
	i = 0;
	if (str[0] == '\0')
		return (0);
	if (str[0] != c)
	{
		num++;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			if (str[i - 1] == c)
				num++;
		}
		i++;
	}
	return (num);
}

/*Finds the length of each string for memory allocation */

static size_t	ft_wordlength(const char *str, size_t i, char c)
{
	size_t	len;

	len = 0;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/*Frees each string and the array in case of an error */

static void	*ft_freearray(char **array, size_t j)
{
	size_t	index;

	index = 0;
	while (index <= j)
	{
		free(array[index]);
		index++;
	}
	free(array);
	return (NULL);
}

/*Makes a copy of the new string */

static char	*ft_strnewcpy(const char *src, char *des, size_t i, size_t length)
{
	size_t	dest;

	dest = 0;
	while (length > 0)
	{
		des[dest] = src[i];
		i++;
		dest++;
		length--;
	}
	des[dest] = '\0';
	return (des);
}


/* Main function */

char	**ft_split(char const *s, char c)
{
	char		**array;
	size_t		i;
	size_t		j;
	size_t		len;

	array = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!array)
		return (0);
	i = 0;
	j = 0;
	while (ft_wordcount(s, c) > j)
	{
		while (s[i] == c)
			i++;
		len = ft_wordlength(s, i, c);
		array[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (!array[j])
			return (ft_freearray(array, j));
		if (s[i] != c)
			array[j] = ft_strnewcpy(s, array[j], i, len);
		i = i + len;
		j++;
	}
	array[j] = 0;
	return (array);
}
