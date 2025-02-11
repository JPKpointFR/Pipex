/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:37:47 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:37:47 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (*lst == NULL)
		*lst = new;
	else
	{
		back = ft_lstlast(*lst);
		back->next = new;
	}
}

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

// void print_list(t_list *lst) {
//     while (lst) {
//         printf("%d -> ", *(int *)(lst->content));
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

// int main(void)
// {
//     t_list *list = NULL;

//     // Créer des nœuds et les ajouter à la liste
//     int *value1 = malloc(sizeof(int));
//     *value1 = 1;
//     t_list *node1 = ft_lstnew(value1);

//     int *value2 = malloc(sizeof(int));
//     *value2 = 2;
//     t_list *node2 = ft_lstnew(value2);

//     int *value3 = malloc(sizeof(int));
//     *value3 = 3;
//     t_list *node3 = ft_lstnew(value3);

//     // Ajouter les nœuds à la liste
//     ft_lstadd_back(&list, node1);
//     ft_lstadd_back(&list, node2);
//     ft_lstadd_back(&list, node3);

//     // Afficher la liste
//     print_list(list);

//     // Libérer la mémoire de la liste
//     free_list(list);
//     return 0;
// }
