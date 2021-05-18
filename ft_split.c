/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:02:55 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/18 15:04:09 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* approach : */
/* 1. go through string count string parts */
/* 2. create **str array (amount of delimiters + 1) * 8*/
/* 3. go through string, copy word to new ptr stor in **str array*/
/* free everything if malloc fails, return 0*/
/* terminate **Str array with a 0 pointer*/
#include <malloc.h>

char	*ft_substr(char const *s, unsigned int start, char len);
void	*ft_calloc(size_t nmemb, size_t size);

size_t	ft_strlen_c(char *str, char end)
{
	size_t	len;

	len = 0;
	while (str[len] != 0 && str[len] != end)
		len++;
	return (len);
}

int	ft_nb_parts(const char *s, char c)
{
	size_t	i;
	size_t	parts;

	i = 0;
	parts = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			parts++;
		while (s[i] != c && s[i] != 0)
			i++;
	}
	return (parts);
}

void	free_all(char **ptr, size_t n)
{
	while (ptr[0])
	{
		free(ptr[n]);
		n--;
	}
	free(ptr);
}

int	next_part(const char *s, char c, size_t *i)
{
	while (s[*i] == c && s[*i] != 0)
		*i = *i + 1;
	if (s[*i] == 0)
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	n;
	size_t	len;
	char	**strings;

	strings = (char **)calloc(8, (ft_nb_parts(s, c) + 1));
	if (!strings)
		return (0);
	i = 0;
	n = 0;
	while (s[i])
	{
		if (!next_part(s, c, &i))
			break ;
		len = ft_strlen_c((char *)s + i, c);
		strings[n] = ft_substr(s, i, len);
		if (strings[n] == 0 && s[i] != 0)
		{
			free_all(strings, n);
			return (0);
		}
		n++;
		i = i + len;
	}
	return (strings);
}
