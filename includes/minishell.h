/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:33:45 by moel-yag          #+#    #+#             */
/*   Updated: 2025/05/05 10:36:43 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <signal.h>
# include <errno.h>
# include <limits.h>
# include <stdbool.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "../libft/libft.h"

# define PATH_MAX 4096

enum				e_token
{
	STRING = 'S',
	IN_FILE = 'I',
	OUT_FILE = 'O',
	PIPE = 'P',
	D_QUOTES = '\"',
	S_QUOTES = '\'',
	HEREDOC = 'H',
	IN_A_FILE = 'A',
	WITH_SPACE = 'W',
	DOLLAR = '$',
	UNSET = 'U',
};

typedef struct s_lexer
{
	char			*args;
	enum e_token	type;
	int				quotes;
	struct s_lexer	*next;
}	t_lexer;

typedef struct s_cmd
{
	char			**arg;
	char			*infile;
	char			*outfile;
	bool			append;
	struct s_cmd	*next;
}	t_cmd;

#endif
