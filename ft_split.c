/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:10:30 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/18 13:03:09 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* approach : */
/* 1. go through string count string parts */
/* 2. create **str array (amount of delimiters + 1) * 8*/
/* 3. go through string, copy word to new ptr stor in **str array*/
/* free everything if malloc fails, return 0*/
/* terminate **Str array with a 0 pointer*/
#include <malloc.h>

int	ft_nb_parts(const char *s, char c)
{
	size_t	i;
	size_t	parts;

	i = 0;
	parts = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != 0)
			i++;
		if (s[i])
			parts++;
		while (s[i] != c && s[i] != 0)
			i++;
	}
	return (parts);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	i;
	size_t	n;
	char	**strings;

	strings = (char **)malloc(8 * (ft_nb_parts(s, c) + 1));
	if (!strings)
		return (0);
	i = 0;
	n = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == c && s[i] != 0)
			i++;
		if (!s[i])
			break ;
		while (s[i] != c && s[i] != 0)
		{
			strings[n][j] = s[i];
			i++;
			j++;
		}
		n++;
	}
	return (strings);
}
