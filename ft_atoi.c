/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:49:06 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/16 12:05:13 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* pointed to by nptr to int.  The behavior is the same as */
/* strtol(nptr, NULL, 10); except that atoi() does not detect errors. */
/* RETURN VALUE         top */
/* The converted value or 0 on error. */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				num;
	int				neg;

	i = 0;
	num = 0;
	neg = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
		if (num == 214748364 && neg == 0 && str[i] == '8')
			return (0);
	}
	if (neg == 1)
		num = num * -1;
	printf("neg: %d \n", neg);
	return (num);
}
