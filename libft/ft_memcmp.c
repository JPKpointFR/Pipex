/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:45:08 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:45:08 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	size_t			i;

	i = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while (i < n)
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}

// int main() {
// 	char buffer1[] = "Hello, World!";
// 	char buffer2[] = "Hello, world!";

// 	// Compare les deux buffers sur 13 octets
// 	int result = ft_memcmp(buffer1, buffer2, 1);

// 	if (result == 0) {
// 		printf("Les deux blocs de mémoire sont identiques.\n");
// 	} else if (result < 0) {
// 		printf("Le premier bloc de mémoire est inférieur au second.\n");
// 	} else {
// 		printf("Le premier bloc de mémoire est supérieur au second.\n");
// 	}
// 	char buffer3[] = "Hello, World!";
// 	char buffer4[] = "Hello, world!";

// 	// Compare les deux buffers sur 13 octets
// 	int res = memcmp(buffer3, buffer4, 1);
// 	if (res == 0) {
// 		printf("Les deux blocs de mémoire sont identiques.\n");
// 	} else if (res < 0) {
// 		printf("Le premier bloc de mémoire est inférieur au second.\n");
// 	} else {
// 		printf("Le premier bloc de mémoire est supérieur au second.\n");
// 	}
// 	return 0;
// }
