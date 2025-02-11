/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 16:03:24 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 16:03:24 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (i + j < len))
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main() {
//     const char *haystack = "Bonjour, je suis un exemple.";
//     const char *needle = "je";
//     const char *need = "pas";

//     char *result = ft_strnstr(haystack, needle, 20);
//     char *res = ft_strnstr(haystack, need, 200);

//     if (result) {
//         printf("Trouvé : %s\n", result);
//     } else {
//         printf("Non trouvé : %s\n", needle);
//     }

//     if (res) {
//         printf("Trouvé : %s\n", res);
//     } else {
//         printf("Non trouvé : %s\n", need); 
//     }

//     return 0;
// }
