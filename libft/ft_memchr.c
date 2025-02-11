/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 20:23:18 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-16 20:23:18 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	size_t			i;

	i = 0;
	string = (unsigned char *)s;
	while (i < n)
	{
		if (string[i] == (unsigned char)c)
			return ((void *)&string[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *s = "asdfghjk";
// 	printf("%s\n", (char *)ft_memchr(s, 'g', 8));  // devrait afficher "ghjk"
// 	printf("%s\n", (char *)ft_memchr(s, 'z', 8));  // devrait afficher "(null)"
// 	return 0;
// }
