/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:46:02 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/26 13:05:31 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* NULL if the allocation fails. */
/*External functs. malloc */
/*Description Allocates (with malloc(3)) and returns a */
/* string representing the integer received as an argument. */
/*Negative numbers must be handled.*/
#include <malloc.h>

int	how_many_digits(int n)
{
	int	digits;

	digits = 1;
	if (n < 0)
	{
		digits++;
		n = -n;
	}
	while (n >= 10)
	{
		digits++;
		n = n / 10;
	}
	return (digits);
}

void	putnbr_to_str(int n, char *str, int i)
{
	if (n >= 10)
	{
		putnbr_to_str(n / 10, str, i - 1);
		putnbr_to_str(n % 10, str, i);
	}
	else if (n >= 0)
		str[i] = n + '0';
	else
	{
		str[0] = '-';
		putnbr_to_str(-n, str, i);
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		strlen;

	if (n == -2147483648)
	{
		str = (char *)malloc(12);
		if (str == NULL)
			return (NULL);
		str = "-2147483648";
		return (str);
	}
	strlen = how_many_digits(n);
	str = (char *)malloc(strlen + 1);
	if (str == NULL)
		return (NULL);
	str[strlen] = 0;
	putnbr_to_str(n, str, strlen - 1);
	return (str);
}
