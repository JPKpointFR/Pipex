/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:53:28 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:53:28 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*mall;
	int		i;

	mall = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!mall)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mall[i] = s[i];
		i++;
	}
	mall[i] = '\0';
	return (mall);
}

// int	main(void)
// {
// 	char	*original = "42 LeHavre";
// 	char	*copy;

// 	copy = ft_strdup(original);
// 	if (copy != NULL)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Copie: %s\n", copy);
// 		free(copy); // Libérer la mémoire allouée
// 	}
// 	else
// 	{
// 		printf("Erreur lors de la duplication.\n");
// 	}
// 	return (0);
// }
