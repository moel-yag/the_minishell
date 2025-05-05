/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:33:50 by moel-yag          #+#    #+#             */
/*   Updated: 2025/05/05 12:02:17 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"
/*
void	builtin_echo(t_cmd *cmd)
{
	bool	n_flag;
	int	i;

	n_flag = false;
	i = 1;
	if (cmd->arg[1] && ft_strcmp(cmd->arg[1], "-n") == 0)
	{
		n_flag = true;
		i++;
	}
	while (cmd->arg[i])
	{
		printf("%s", cmd->arg[i]);
		if (cmd->arg[i + 1])
			printf(" ");
		i++;
	}
	if (!n_flag)
		printf("\n");
}

void	update_pwd_env(char *oldpwd)
{
	char	cwd[PATH_MAX];
	if (oldpwd)
		set_env_var("OLDPWD", oldpwd);
	if (getcwd(cwd, PATH_MAX))
		set_env_var("PWD", cwd);
}

void	builtin_cd(t_cmd *cmd)
{
	char	oldpwd[PATH_MAX];
	char	*path;

	getcwd(oldpwd, PATH_MAX);
	if (!cmd->arg[1] || strcmp(cmd->arg[1], "~") == 0)
		path = get_env_var("HOME");
	else if (strcmp(cmd->arg[1], "-") == 0)
		path = get_env_var("OLDPWD");
	else
		path = cmd->arg[1];
	if (chdir(path) == -1)
		perror("minishell: cd");
	else
		update_pwd_env(oldpwd);
}
*/