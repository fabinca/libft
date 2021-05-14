/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:40:11 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/14 11:41:45 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaration int isalnum(int c); */
/* Parameters c − This is the character to be checked. */
/* Return Value This function returns non-zero value if c */
/* is a digit or a letter, else it returns 0. */
int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
