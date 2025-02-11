/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:38:50 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:38:50 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	itoa_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*mall;
	long	num;
	int		size;

	size = itoa_len(n);
	num = n;
	mall = malloc(sizeof(char) * (size + 1));
	if (!mall)
		return (NULL);
	mall[size--] = '\0';
	if (num == 0)
		mall[0] = '0';
	if (num < 0)
	{
		mall[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		mall[size--] = 48 + (num % 10);
		num /= 10;
	}
	return (mall);
}

// int	main(void)
// {
// 	char *str;
// 	str = ft_itoa(12345);
// 	printf("%s\n", str);  // Affiche : "12345"
// 	free(str);
// 	str = ft_itoa(-54321);
// 	printf("%s\n", str);  // Affiche : "-54321"
// 	free(str);
// 	str = ft_itoa(0);
// 	printf("%s\n", str);  // Affiche : "0"
// 	free(str);
// 	str = ft_itoa(-2147483648);
// 	printf("%s\n", str);  // Affiche : "-2147483648"
// 	free(str);
// 	return 0;
// }
