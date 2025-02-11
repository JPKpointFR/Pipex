/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 16:00:35 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 16:00:35 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mall;

	if (!s || !f)
		return (NULL);
	mall = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!mall)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mall[i] = (*f)(i, s[i]);
		i++;
	}
	mall[i] = '\0';
	return (mall);
}

// char change_char(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (c - 32);
// 	return c;
// }

// int main(void)
// {
// 	char str[] = "abcdef";
// 	char *result;
// 	result = ft_strmapi(str, change_char);
// 	if (result)
// 	{
// 		printf("Chaîne originale: %s\n", str);
// 		printf("Chaîne modifiée : %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Erreur d'allocation de mémoire\n");
// 	}
// 	return 0;
// }
