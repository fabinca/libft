/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:52:37 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/18 15:26:53 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memccpy() function copies no more than n bytes from memory area src to */
/* memory area dest, stopping when the character c is found.  */
/* If the memory areas overlap the results are undefined */
/* RETURN VALUE         */
/* The memccpy() function returns a pointer to the next character in dest */
/* after c, or NULL if c was not found in the first n characters of src. */
/* Note that the purpose of restrict is to show only syntax. It doesn't */
/* change anything in output (or logic). It is just a way for programmer */
/* to tell compiler about an optimization  */

#include <unistd.h>

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)d + i) = *((char *)s + i);
		if (*((char *)s + i) == c)
			return (d + i);
		i++;
	}
	return (NULL);
}
