/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 13:56:03 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-15 13:56:03 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while ((i < n))
	{
		str[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	b[10] = "qwertyfdu";
// 	printf("%s\n", b);
// 	ft_bzero(b, 5);
// 	// bzero(b, 5);
// 	printf("%s", b);
// 	return (0);
// }
