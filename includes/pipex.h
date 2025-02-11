/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-06 16:20:49 by adcisse           #+#    #+#             */
/*   Updated: 2025-01-06 16:20:49 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <fcntl.h>
#include "../libft/libft.h"

/* Pipex */
void	error(void);
void	execute(char *argv, char **envp);
char	*find_path(char *cmd, char **envp);

/* Pipex_Bonus */
void	usage(void);
int		open_file(char *argv, int i);
int		get_next_line(char **line);
void	add_line_and_free(int fd, char **line, char *limiter);
