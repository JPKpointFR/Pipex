/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 09:17:13 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-15 09:17:13 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit( int c )
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	c = 5;

// 	if (ft_isdigit(c))
// 		printf("Le caractère est un chiffre décimal.\n");
// 	else
// 		printf("Le caractère n'est pas un chiffre décimal ou c'est EOF.\n");

// 	if (isdigit(c))
// 		printf("Le caractère est un chiffre décimal.\n");
// 	else
// 		printf("Le caractère n'est pas un chiffre décimal ou c'est EOF.\n");

// 	return 0;
// }
