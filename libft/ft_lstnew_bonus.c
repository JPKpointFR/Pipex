/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:40:51 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:40:51 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mall;

	mall = malloc(sizeof(t_list));
	if (!mall)
		return (NULL);
	mall->content = content;
	mall->next = NULL;
	return (mall);
}

// int	main(void)
// {
// 	char *content = "Hello, world!";
// 	t_list *node = ft_lstnew(content);
// 	if (node == NULL)
// 	{
// 		printf("ft_lstnew a échoué à créer un nouveau maillon.\n");
// 		return (1);
// 	}
// 	printf("Contenu du maillon : %s\n", (char *)node->content);
// 	free(node);
// 	return (0);
// }
