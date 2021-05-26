/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:14:52 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/21 22:03:02 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lst_len;

	lst_len = 1;
	while (lst->next != NULL)
	{
		lst_len++;
		lst = lst->next;
	}
	return (lst_len);
}
