/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 10:03:34 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-15 10:03:34 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum( int c )
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	c = 5;

// 	if (ft_isalnum(c))
// 		printf("Le caractère est un caractère apha-numérique.\n");
// 	else
// 		printf("Le caractère n'est pas un caractère apha-numérique.\n");

// 	if (isalnum(c))
// 		printf("Le caractère est un caractère apha-numérique.\n");
// 	else
// 		printf("Le caractère n'est pas un caractère apha-numérique.\n");
// 	return 0;
// }
