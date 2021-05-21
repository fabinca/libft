/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:01:07 by cfabian           #+#    #+#             */
/*   Updated: 2021/05/21 20:40:56 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_lst;

	new_lst = ft_lstnew(f(lst->content));
	new = new_lst;
	while (1)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
			ft_lstclear(&new_lst, del);
		ft_lstadd_back(&new_lst, new);
		if (lst->next == NULL)
			break ;
		lst = lst->next;
	}
	return (new_lst);
}
