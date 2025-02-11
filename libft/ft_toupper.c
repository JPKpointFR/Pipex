/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 17:36:21 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-16 17:36:21 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z' )
	{
		c -= 32;
	}
	return (c);
}

// int main() {
//     char ch = '2';
//     char upper = ft_toupper(ch);
//     printf("La version majuscule de %c est %c\n", ch, upper); // Affiche A
//     return 0;
// }
