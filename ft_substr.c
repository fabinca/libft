/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:24:53 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/18 12:40:46 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	i = start;
	while (*(s + i) != 0 && i - start < len)
	{
		ptr[i - start] = s[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
