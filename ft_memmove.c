/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:59:09 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/14 11:59:51 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memory area dest.  The memory areas may overlap: copying takes */
/* place as though the bytes in src are first copied into a */
/* temporary array that does not overlap src or dest, and the bytes */
/* are then copied from the temporary array to dest. */
/* RETURN VALUE */
/* The memmove() function returns a pointer to dest. */
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	void	*temp;

	i = 0;
	while (i < n)
	{
		*((char *)temp + i) = *((char *)src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)temp + i);
		i++;
	}
	return (dest);
}
