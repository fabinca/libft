/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:36:16 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/14 13:42:13 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
