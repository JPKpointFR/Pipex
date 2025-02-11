/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 13:30:01 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-23 13:30:01 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*nxt;

	nxt = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&nxt, del);
			return (NULL);
		}
		ft_lstadd_back(&nxt, new);
		lst = lst->next;
	}
	return (nxt);
}

// // Fonction qui double une valeur
// void *double_value(void *content)
// {
//     int *new_value = malloc(sizeof(int));
//     if (!new_value)
//         return NULL;
//     *new_value = (*(int *)content) * 2;
//     return new_value;
// }

// // Fonction de suppression pour les éléments
// void del(void *content)
// {
//     free(content);
// }

// // Fonction principale pour tester ft_lstmap
// int main()
// {
//     // Créer une liste chaînée simple avec des entiers
//     t_list *lst1 = ft_lstnew(malloc(sizeof(int)));
//     t_list *lst2 = ft_lstnew(malloc(sizeof(int)));
//     t_list *lst3 = ft_lstnew(malloc(sizeof(int)));
//     if (!lst1 || !lst2 || !lst3)
//     {
//         printf("Erreur d'allocation\n");
//         return (1);
//     }
//     // Initialiser les valeurs
//     *(int *)lst1->content = 1;
//     *(int *)lst2->content = 2;
//     *(int *)lst3->content = 3;
//     // Lier les noeuds
//     lst1->next = lst2;
//     lst2->next = lst3;
//     // Afficher avant l'application de ft_lstmap
//     printf("Avant l'application de ft_lstmap:\n");
//     printf("%d -> %d -> %d\n", *(int *)lst1->content,
// *(int *)lst2->content, *(int *)lst3->content);

//     // Appeler ft_lstmap
//     t_list *new_list = ft_lstmap(lst1, double_value, del);

//     // Afficher après l'application de ft_lstmap
//     printf("Après l'application de ft_lstmap:\n");
//     if (new_list)
//     {
//         printf("%d -> %d -> %d\n", *(int *)new_list->content, 
// *(int *)new_list->next->content, *(int *)new_list->next->next->content);
//     }
//     // Nettoyer les listes
//     ft_lstclear(&lst1, del);
//     ft_lstclear(&new_list, del);
//     return 0;
// }
