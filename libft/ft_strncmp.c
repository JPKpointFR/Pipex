/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 19:27:12 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-16 19:27:12 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main()
// {
//     char *str1 = "b";
//     char *str2 = "a";
//     int result = ft_strncmp(str1, str2, 0);
//     if (result == 0)
//         printf("Les premiers caractères sont identiques.\n");
//     else if (result < 0)
//         printf("Les premiers caractères de str1 sont inférieurs.\n");
//     else
//         printf("Les premiers caractères de str1 sont supérieurs.\n");
//     return 0;
// }
