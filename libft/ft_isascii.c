/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 11:03:48 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-15 11:03:48 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii( int c )
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c = 233;

// 	if (ft_isascii(c))
// 		printf("Le caractère est un ascii.\n");
// 	else
// 		printf("Le caractère n'est pas un ascii.\n");

// 	if (isascii(c))
// 		printf("Le caractère est un ascii.\n");
// 	else
// 		printf("Le caractère n'est pas un ascii.\n");
// 	return 0;
// }
