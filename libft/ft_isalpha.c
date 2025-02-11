/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:38:32 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:38:32 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
// 	char c = 's';

// 	if (ft_isalpha(c))
// 		printf("Le caractère est une lettre.\n");
// 	else
// 		printf("Le caractère n'est pas une lettre ou c'est EOF.\n");

// 	return 0;
// }