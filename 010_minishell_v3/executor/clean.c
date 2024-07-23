/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguerrer <rguerrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:49:15 by rguerrer          #+#    #+#             */
/*   Updated: 2024/07/23 12:20:42 by rguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	reset_std(t_shell *shell)
{
	dup2(shell->infile, STDIN_FILENO);
	dup2(shell->outfile, STDOUT_FILENO);
}

void	close_fds(t_shell *shell)
{
	if (shell->fdin > 0)
		close(shell->fdin);
	if (shell->fdout > 0)
		close(shell->fdout);
	if (shell->pin > 0)
		close(shell->pin);
	if (shell->pout > 0)
		close(shell->pout);
}

void	reset_fds(t_shell *shell)
{
	shell->fdin = -1;
	shell->fdout = -1;
	shell->pin = -1;
	shell->pout = -1;
	shell->pid = -1;
}

void	ft_close_resets(t_shell *shell)
{
	reset_std(shell);
	close_fds(shell);
	reset_fds(shell);
}

void	reset_env(t_shell *shell)
{
	int	i;

	i = 0;
	while (shell->env[i])
	{
		if (shell->oldpwd != NULL && ft_strncmp(shell->env[i], "OLDPWD=", 7) == 0)
			shell->env[i] = ft_strjoin("OLDPWD=", shell->oldpwd);
		i++;
	}
}
