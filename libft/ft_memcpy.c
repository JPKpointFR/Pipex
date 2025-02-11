/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 14:34:05 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-15 14:34:05 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (n > 0 && (dest != NULL || src != NULL))
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char data[] = "1234567890";
// 	printf("%s\n", (char*)ft_memcpy(data + 2, data, 5));

// 	char tada[] = "1234567890";
// 	printf("%s\n", (char*)memcpy(tada + 2, tada, 5));

// 	return (0);
// }
