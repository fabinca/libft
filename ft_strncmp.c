/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:19:56 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/26 18:16:39 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* s1 > s2 (first unmatching ASCI value)->return diff,only first n bytes */
#include <libft.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	return (ft_memcmp(s1, s2, n));
}
