/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-14 15:52:24 by adcisse           #+#    #+#             */
/*   Updated: 2025-01-14 15:52:24 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	child_process(char *argv, char **envp)
{
	pid_t	pid;
	int		fd[2];

	if (pipe(fd) == -1)
		error();
	pid = fork();
	if (pid == -1)
		error();
	if (pid == 0)
	{
		close(fd[0]);
		dup2(fd[1], STDOUT_FILENO);
		close(fd[1]);
		execute(argv, envp);
	}
	else
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
	}
}

void	here_doc(char *limiter, int argc)
{
	pid_t	pid;
	int		fd[2];
	char	*line;

	if (argc < 6)
		usage();
	if (pipe(fd) == -1)
		error();
	pid = fork();
	if (pid == 0)
	{
		close(fd[0]);
		while (get_next_line(&line))
			add_line_and_free(fd[1], &line, limiter);
		close(fd[1]);
		exit(EXIT_SUCCESS);
	}
	else
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		wait(NULL);
	}
}

void	process(int argc, char **argv, char **envp, int i)
{
	int		filein;
	int		fileout;

	if (ft_strncmp(argv[1], "here_doc", 8) == 0)
	{
		i = 3;
		fileout = open_file(argv[argc - 1], 0);
		here_doc(argv[2], argc);
	}
	else
	{
		i = 2;
		filein = open_file(argv[1], 2);
		fileout = open_file(argv[argc - 1], 1);
		dup2(filein, STDIN_FILENO);
	}
	if ((!ft_strncmp(argv[1], "here_doc", 8) == 0))
		close(filein);
	close(fileout);
	while (i < argc - 2)
		child_process(argv[i++], envp);
	dup2(fileout, STDOUT_FILENO);
	execute(argv[argc - 2], envp);
	while (wait(NULL) == -1)
		break ;
}

int	main(int argc, char **argv, char **envp)
{
	int	i;

	i = 0;
	if (argc < 5)
		usage();
	process(argc, argv, envp, i);
	return (0);
}
