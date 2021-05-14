/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:43:22 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/14 11:44:21 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* a decimal digit character. Decimal digits are 0 1 2 3 4 5 6 7 8 9. */
/* Declaration int isdigit(int c); */
/* Parameters c − This is the character to be checked. */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
