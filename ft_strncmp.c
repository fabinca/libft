/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:19:56 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/27 20:49:15 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* s1 > s2 (first unmatching ASCI value)->return diff,only first n bytes */
#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		if (*s1 == 0)
			return (0);
		i++;
		s1++;
		s2++;
	}
	return (0);
}
