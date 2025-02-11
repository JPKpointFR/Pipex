/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:50:27 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:50:27 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_separation(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static char	*copy(char const *s, char c, int i)
{
	int		num;
	int		copy;
	char	*word;

	num = 0;
	copy = i;
	while (s[i] != c && s[i])
	{
		num++;
		i++;
	}
	word = malloc((num + 1) * sizeof(char));
	if (!word)
		return (NULL);
	num = 0;
	while ((s[copy] != c && s[copy] != '\0'))
	{
		word[num] = s[copy];
		copy++;
		num++;
	}
	word[num] = '\0';
	return (word);
}

static char	**free_all(char **arr, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**mall;
	int		words;
	int		num;
	int		i;

	words = count_separation(s, c);
	mall = malloc((words + 1) * sizeof(char *));
	i = 0;
	num = 0;
	if (!mall)
		return (NULL);
	while (i < words)
	{
		while (s[num] == c)
			num++;
		if (s[num] != c)
			mall[i] = copy(s, c, num);
		if (!mall[i])
			return (free_all(mall, i));
		while (s[num] != c && s[num] != '\0')
			num++;
		i++;
	}
	mall[i] = NULL;
	return (mall);
}

// int main(void)
// {
//     char **result;
//     int i;
//     // Test de ft_split avec une chaîne de caractères et un délimiteur
//     char *str = "Bonjour,comment,ça,va";
//     char delimiter = ',';
//     // Appel de la fonction ft_split
//     result = ft_split(str, delimiter);
//     // Vérifier que la fonction n'a pas échoué
//     if (!result)
//     {
//         printf("Erreur lors de l'allocation de mémoire.\n");
//         return (1);
//     }
//     // Affichage du tableau de chaînes de caractères résultant
//     i = 0;
//     while (result[i] != NULL)
//     {
//         printf("Mot %d : %s\n", i, result[i]);
//         i++;
//     }
//     // Libération de la mémoire allouée par ft_split
//     i = 0;
//     while (result[i] != NULL)
//     {
//         free(result[i]);
//         i++;
//     }
//     free(result);
//     return 0;
// }