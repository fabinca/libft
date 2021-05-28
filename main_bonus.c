#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <bsd/string.h>
#include "libft.h"

void	add(void *ptr)
{

	*(int *)ptr = *(int *)ptr + 1;
}

void	print_list(t_list *lst)
{
	while (1)
	{
		printf("%d - ", *(int *)lst->content);
		if (lst->next == NULL)
			break ;
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*head;
	t_list	*tmp;
	int		hed = 1111111;

	head = ft_lstnew(&hed);
	for (int i = 0; i < 10; i++)
	{
		tmp = ft_lstnew(&i);
		ft_lstadd_front(&head, tmp);
	}
	print_list(head);
	
	printf("\n %d", ft_lstsize(head));
	//print_list(ft_lstlast(head));
	return (0);
}
