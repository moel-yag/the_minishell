#ifndef MINISHELL_H
#define MINISHELL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include <errno.h>
#include <limits.h>
#include <stdbool.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "../libft/libft.h"

typedef struct s_cmd
{
	char **arg;
	char *infile;
	char *outfile;
	bool append;
	struct s_cmd *next;
} t_cmd;

#endif
