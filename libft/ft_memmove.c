/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 09:20:55 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-16 09:20:55 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (!dest && !src)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
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
// 	char da[] = "1234567890";
// 	char pada[] = "jhgfdhhhhhhhhhdds";
// 	printf("Avant memmove (sans chevauchement): %s\n", da);
// 	printf("%s\n", (char*)ft_memmove(da, pada, 5));
// 	printf("%s\n", (char*)memmove(da, pada, 5));

// 	char pda[] = "1234567890";
// 	char data[] = "1234567890";
// 	printf("Avant memmove (avec chevauchement): %s\n", data);
// 	printf("%s\n", (char*)ft_memmove(data + 2, data, 5));
// 	printf("%s\n", (char*)memmove(pda + 2, pda, 5));  //
// 	return (0);
// }
