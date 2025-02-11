/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 14:29:33 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-16 14:29:33 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	total_size;
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen((char *)src);
	total_size = dest_len + src_len;
	if (size <= dest_len)
		return (src_len + size);
	i = 0;
	while (dest_len < size - 1 && src[i])
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (total_size);
}

// int	main(void)
// {
// 	char d[] = "12345";
// 	char a[] = "6789";
// 	printf("%d\n", (int)ft_strlcat(d, a, 100));
// 	printf("%s\n", d);
// 	return (0);
// }
