/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 18:31:41 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-16 18:31:41 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string;
	int		i;

	i = 0;
	string = (char *)s;
	while (string[i] != (char)c && string[i])
		i++;
	if (string[i] == (char)c)
		return (&string[i]);
	else
		return (NULL);
}

// int	main(void)
// {
// 	const char *s = "asdfghjk";
// 	printf("%s", ft_strchr(s, 'g'));
// 	return 0;
// }
