/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 12:12:19 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-15 12:12:19 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	char	*str;

	str = (char *)ptr;
	i = 0;
	while ((i < num))
	{
		str[i] = value;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	b[50];
// 	int		c = 'c';
// 	char	*ft_test;
// 	char	*test;

// 	ft_test = (char *)ft_memset(b, c, 5);
// 	test = (char *)memset(b, c, 5);

// 	printf("%s\n", ft_test);
// 	printf("%s", test);
// 	return (0);
// }
