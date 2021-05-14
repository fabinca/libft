/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:14:56 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/14 11:15:27 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* starting at the location pointed to by s, by writing zeros (bytes */
/* containing '\0') to that area. */
/* The explicit_bzero() function performs the same task as bzero(). */
/* It differs from bzero() in that it guarantees that compiler */
/* optimizations will not remove the erase operation if the compiler */
/* deduces that the operation is "unnecessary". */

#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)s + i) = 0;
		i++;
	}
}
