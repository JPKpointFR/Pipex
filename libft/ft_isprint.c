/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 11:32:55 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-15 11:32:55 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint( int c )
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	c = 55;
// 	if (ft_isprint(c))
// 		printf("Le caractère est printable.\n");
// 	else
// 		printf("Le caractère n'est pas printable.\n");

// 	if (isprint(c))
// 		printf("Le caractère est printable.\n");
// 	else
// 		printf("Le caractère n'est pas printable.\n");
// 	return (0);
// }
