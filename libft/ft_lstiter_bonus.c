/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 13:32:39 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-23 13:32:39 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			(*f)(lst->content);
			lst = lst->next;
		}
	}
}

// void print_content(void *content)
// {
//     printf("%s\n", (char *)content);
// }

// int main(void)
// {
//     // Création d'une petite liste chaînée
//     t_list *node1 = ft_lstnew("Hello");
//     t_list *node2 = ft_lstnew("World");
//     t_list *node3 = ft_lstnew("42");
//     // Chaînage des nœuds
//     node1->next = node2;
//     node2->next = node3;

//     // Applique la fonction print_content à chaque élément de la liste
//     ft_lstiter(node1, &print_content);

//     // Libérer la mémoire allouée (en général c'est une bonne pratique)
//     free(node1);
//     free(node2);
//     free(node3);

//     return 0;
// }
