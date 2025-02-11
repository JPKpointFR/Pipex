/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:41:56 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:41:56 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
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

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*second;
// 	t_list	*third;

// 	head = ft_lstnew("Premier maillon");
// 	second = ft_lstnew("Deuxième maillon");
// 	third = ft_lstnew("Troisième maillon");
// 	head->next = second;
// 	second->next = third; 
// 	int size = ft_lstsize(head);
// 	printf("La taille de la liste est : %d\n", size);
// 	free_list(head);
// 	return (0);
// }
