#include "minishell.h"

void	builtin_echo(t_cmd *cmd)
{
	bool	n_flag;
	int	i;

	n_flag = false;
	i = 1;
	if (cmd->args[1] && ft_strcmp(cmd->arg[1], "-n") == 0)
	{
		n_flag = true;
		i++;
	}
	while (cmd->args[i])
	{
		printf("%s", cmd->args[i]);
		if (cmd->args[i + 1])
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
	if (!cmd->args[1] || strcmp(cmd->args[1], "~") == 0)
		path = get_env_var("HOME");
	else if (strcmp(cmd->args[1], "-") == 0)
		path = get_env_var("OLDPWD");
	else
		path = cmd->args[1];
	if (chdir(path) == -1)
		perror("minishell: cd");
	else
		update_pwd_env(oldpwd);
}
