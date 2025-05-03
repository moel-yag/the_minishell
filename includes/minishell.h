#ifndef MINISHELL_H
#define MINISHELL_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <string.h>
# include <>
# include "libft.h"

typedef	struct_cmd
{
	char		**arg;
	char		*infile;
	char		*outfile;
	bool		append;
	struct	s_cmd	*next;
}	t_cmd;

#endif
