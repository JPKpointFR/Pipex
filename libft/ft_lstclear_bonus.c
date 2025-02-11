/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 13:37:29 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-23 13:37:29 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nxt;

	if (lst)
	{
		while (*lst)
		{
			nxt = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = nxt;
		}
	}
}

// void del(void *content)
// {
//     free(content);
// }

// int main()
// {
//     // Créer une liste chaînée simple avec des strings
//     t_list *lst1 = ft_lstnew(strdup("Hello"));
//     t_list *lst2 = ft_lstnew(strdup("World"));
//     t_list *lst3 = ft_lstnew(strdup("42"));

//     if (!lst1 || !lst2 || !lst3)
//     {
//         printf("Erreur d'allocation\n");
//         return (1);
//     }

//     // Lier les noeuds
//     lst1->next = lst2;
//     lst2->next = lst3;

//     // Afficher avant de supprimer
//     printf("Avant suppression:\n");
//     printf("%s -> %s -> %s\n", (char *)lst1->content, 
// (char *)lst2->content, (char *)lst3->content);

//     // Appeler ft_lstclear pour tout supprimer
//     ft_lstclear(&lst1, del);

//     // Vérifier que la liste est bien supprimée
//     if (lst1 == NULL)
//         printf("Liste supprimée avec succès\n");
//     else
//         printf("Erreur lors de la suppression\n");

//     return 0;
// }