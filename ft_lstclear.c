/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:10:12 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/28 14:58:23 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst)
		return ;
	tmp = (*lst)->next;
	while (tmp != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, *del);
		*lst = tmp;
	}
}
