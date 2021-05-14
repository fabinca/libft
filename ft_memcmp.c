/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:54:14 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/14 11:58:01 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* greater than zero if the first n bytes of s1 is found, */
/* respectively, to be less than, to match, or be greater than the */
/* first n bytes of s2. */
/* For a nonzero return value, the sign is determined by the sign of */
/* the difference between the first pair of bytes (interpreted as */
/* unsigned char) that differ in s1 and s2. */
/* If n is zero, the return value is zero. */
#include <unistd.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		if (*((unsigned char *)s1 + i) == 0 && *((unsigned char *)s2 + i) != 0)
			break ;
		i++;
	}
	return (0);
}
