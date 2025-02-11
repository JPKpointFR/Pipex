/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:38:01 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:38:01 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*call;

	call = malloc(num * size);
	if (!call)
		return (NULL);
	ft_bzero(call, num * size);
	return (call);
}

// int	main(void)
// {
// 	// Nombre d'éléments et taille de chaque élément
// 	size_t	num = 10;
// 	size_t	size = sizeof(int);

// 	// Utilisation de ft_calloc pour allouer la mémoire
// 	int *arr = (int *)ft_calloc(num, size);
// 	// Vérification que la mémoire a bien été allouée
// 	if (!arr)
// 	{
// 		printf("Échec de l'allocation de mémoire.\n");
// 		return (1);
// 	}
// 	// Affichage du contenu de la mémoire allouée (devrait être rempli de zéros)
// 	printf("Contenu du tableau alloué avec 
//ft_calloc (devrait être initialisé à 0) :\n");
// 	for (size_t i = 0; i < num; i++)
// 	{
// 		printf("arr %d\n", arr[i]);
// 	}
// 	// Libération de la mémoire
// 	free(arr);
// 	return (0);
// }
