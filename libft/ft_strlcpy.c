/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 14:29:46 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-16 14:29:46 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	nb;

	i = 0;
	nb = 0;
	while (src[nb] != '\0')
		nb++;
	if (size == 0)
		return (nb);
	while (i < size -1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (nb);
}

// int	main(void)
// {
// 	char src[] = "Hello, world!";
//     char dest[10];
// 	printf("%d\n",(int)ft_strlcpy(dest, src, sizeof(dest)));
// 	printf("%s\n", dest);
// 	return (0);
// }
