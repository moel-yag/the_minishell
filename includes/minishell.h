/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:33:45 by moel-yag          #+#    #+#             */
/*   Updated: 2025/05/05 10:46:26 by moel-yag         ###   ########.fr       */
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

enum	e_token
{
	T_WORD,
        T_PIPE,
        T_REDIR_IN,
        T_REDIR_OUT,
        T_REDIR_APPEND,
        T_REDIR_HEREDOC,
        T_EOF,
        T_ERROR,
	IN_A_FILE = 'A',
	WITH_SPACE = 'W',
	DOLLAR = '$',
	UNSET = 'U',
};

typedef struct s_lexer
{
	char			*arg;
	int				quotes;
	enum e_token	type;
	struct s_lexer	*next;
}	t_lexer;

typedef struct s_cmd
{
	char			**args;
	char			*infile;
	char			*outfile;
	bool			append;
	struct s_cmd	*next;
}	t_cmd;

#endif
