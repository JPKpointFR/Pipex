/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:58:58 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:58:58 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mall;
	int		total;
	int		i;
	int		j;

	total = ft_strlen(s1) + ft_strlen(s2);
	mall = malloc((total + 1) * sizeof(char));
	if (!mall || !s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		mall[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		mall[i] = s2[j];
		i++;
		j++;
	}
	mall[i] = '\0';
	return (mall);
}

// int main(void)
// {
//     char *s1 = "Hello, ";
//     char *s2 = "world!";
//     char *result = ft_strjoin(s1, s2);

//     if (result)
//     {
//         printf("%s\n", result); // Devrait afficher "Hello, world!"
//         free(result); // Libérer la mémoire allouée
//     }

//     return 0;
// }
