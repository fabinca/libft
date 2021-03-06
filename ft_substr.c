/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:24:53 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/28 23:28:55 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		ptr = (char *)ft_calloc(1, 1);
		return (ptr);
	}
	if (s_len - start < len)
		len = s_len - start;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	i = start;
	while (i - start < len && *(s + i) != 0)
	{
		ptr[i - start] = s[i];
		i++;
	}
	ptr[i - start] = 0;
	return (ptr);
}
