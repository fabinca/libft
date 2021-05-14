/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:19:56 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/14 12:20:34 by cfabian          ###   ########.fr       */
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
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == 0)
			return (0);
		i++;
	}
	return (0);
}
