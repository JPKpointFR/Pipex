/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:39:08 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:39:08 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list *new;

// 	new = (t_list *)malloc(sizeof(t_list));
// 	if (!new)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

// void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s -> ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// void	free_list(t_list *lst)
// {
// 	t_list *tmp;

// 	while (lst)
// 	{
// 		tmp = lst->next;
// 		free(lst);
// 		lst = tmp;
// 	}
// }

// int	main(void)
// {
// 	t_list *head = ft_lstnew("Element 2");
// 	t_list *second = ft_lstnew("Element 3");
// 	head->next = second;
// 	printf("Liste avant d'ajouter en tête :\n");
// 	print_list(head);
// 	t_list *new_node = ft_lstnew("Element 1");
// 	ft_lstadd_front(&head, new_node);
// 	printf("Liste après ajout en tête :\n");
// 	print_list(head);
// 	free_list(head);
// 	return (0);
// }
