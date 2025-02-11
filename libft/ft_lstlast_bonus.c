/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:40:09 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:40:09 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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

// int main(void)
// {
//     t_list *list;
//     t_list *last;
//     char *content1 = "3rez";
//     char *content2 = "2";
//     char *content3 = "1";

//     t_list *node1 = ft_lstnew(content1);
//     t_list *node2 = ft_lstnew(content2);
//     t_list *node3 = ft_lstnew(content3);

//     list = node1;
//     ft_lstadd_front(&list, node2);
//     ft_lstadd_front(&list, node3);

//     last = ft_lstlast(list);

//     if (last != NULL)
//         printf("Le dernier élément de la liste est :
// %s\n", (char *)last->content);
//     else
//         printf("La liste est vide.\n");
//     free_list(list);
//     return 0;
// }
