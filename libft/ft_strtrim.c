/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 16:04:26 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 16:04:26 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mall;
	int		total;
	int		i;
	int		first;
	int		last;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	last = ft_strlen(s1);
	while (last > first && ft_strchr(set, s1[last - 1]))
		last--;
	total = last - first;
	mall = malloc((total + 1) * sizeof(char));
	if (!mall)
		return (NULL);
	i = 0;
	while (i < total)
		mall[i++] = s1[first++];
	mall[i] = '\0';
	return (mall);
}

// int main(void)
// {
//     char *s1;
//     char *set;
//     char *result;

//     // Test 1: Trim des espaces au début et à la fin
//     s1 = "   Hello World   ";
//     set = " ";
//     result = ft_strtrim(s1, set);
//     printf("Test 1: \"%s\"\n", result); // Résultat attendu: "Hello World"
//     free(result);

//     // Test 2: Trim des étoiles (*) au début et à la fin
//     s1 = "***C Programming***";
//     set = "*";
//     result = ft_strtrim(s1, set);
//     printf("Test 2: \"%s\"\n", result); // Résultat attendu: "C Programming"
//     free(result);

//     // Test 3: Trim des caractères aléatoires au début et à la fin
//     s1 = "xyzHello 42xyz";
//     set = "xyz";
//     result = ft_strtrim(s1, set);
//     printf("Test 3: \"%s\"\n", result); // Résultat attendu: "Hello 42"
//     free(result);

//     // Test 4: Aucun caractère à trimmer
//     s1 = "Bonjour";
//     set = " ";
//     result = ft_strtrim(s1, set);
//     printf("Test 4: \"%s\"\n", result); // Résultat attendu: "Bonjour"
//     free(result);

//     // Test 5: Chaîne vide
//     s1 = "";
//     set = " ";
//     result = ft_strtrim(s1, set);
//     printf("Test 5: \"%s\"\n", result); // Résultat attendu: "" (chaîne vide)
//     free(result);

//     return 0;
// }
