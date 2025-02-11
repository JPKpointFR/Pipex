/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:30:54 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:30:54 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mall;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - (size_t)start)
		len = ft_strlen(s) - (size_t)start;
	mall = malloc((len + 1) * sizeof(char));
	if (!mall)
		return (NULL);
	i = 0;
	while (s[start] && (i < len))
	{
		mall[i] = (char)s[start];
		i++;
		start++;
	}
	mall[i] = '\0';
	return (mall);
}

// int	main(void)
// {
// 	char *original = "42 LeHavre";
// 	char *copy;
//     unsigned int start = 2;
//     size_t len = 50;

// 	copy = ft_substr(original, start, len);
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
