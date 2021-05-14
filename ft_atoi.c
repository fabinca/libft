/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:49:06 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/14 11:36:09 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* pointed to by nptr to int.  The behavior is the same as */
/* strtol(nptr, NULL, 10); except that atoi() does not detect errors. */
/* RETURN VALUE         top */
/* The converted value or 0 on error. */

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				num;
	int				pos_or_neg;

	i = 0;
	num = 0;
	pos_or_neg = 1;
	while (str[i] == ' ' | str[i] == '\f' | str[i] == '\n'
		| str[i] == '\r' | str[i] == '\t' | str[i] == '\v')
		i++;
	if (str[i] == '-')
		pos_or_neg = -1;
	if (str[i] == '+' | str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
		if (num == 214748364 && pos_or_neg == -1 && str[i] == "8")
			return (-2147483648);
	}
	num = num * pos_or_neg;
	return (num);
}
