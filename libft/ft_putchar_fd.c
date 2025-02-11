/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 15:47:14 by adcisse           #+#    #+#             */
/*   Updated: 2024-10-21 15:47:14 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// void	ft_putchar_fd(char c, int fd);

// int	main(void)
// {
// 	ft_putchar_fd('A', 1);
// 	write(1, "\n", 1);

// 	int	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Error opening file");
// 		return (1);
// 	}
// 	ft_putchar_fd('B', fd);
// 	ft_putchar_fd('\n', fd);
// 	close(fd);
// 	return (0);
// }
