#ifndef MINISHELL_H
#define MINISHELL_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <sys/types.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <stdio.h>

typedef	struct s_cmd
{
	char		**arg;
	char		*infile;
	char		*outfile;
	bool		append;
	struct	s_cmd	*next;
}	t_cmd;

#endif
