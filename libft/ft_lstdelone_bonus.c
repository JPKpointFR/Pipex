/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 13:36:50 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-23 13:36:50 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		(*del)(lst->content);
		free(lst);
	}
}

// void del(void *content)
// {
//     free(content); 
// }

// int main(void)
// {
//     t_list *elem = (t_list *)malloc(sizeof(t_list));
//     if (!elem)
//         return (1); 

//     elem->content = malloc(sizeof(char) * 6);
//     if (!elem->content)
//     {
//         free(elem);
//         return (1); 
//     }
//     elem->content = strcpy(elem->content, "Hello");
//     elem->next = NULL;
//     ft_lstdelone(elem, del);

//     printf("L'élément de la liste a été supprimé.\n");

//     return 0;
// }
