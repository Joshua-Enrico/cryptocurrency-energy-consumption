#ifndef _crypto_
#define _crypto_
#define UNUSED(x) (void)(x)

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>
#include <fcntl.h>

typedef struct variables
{
	char **array_tokens;
	char *buffer;
	int status;
	char **argv;
	int counter;
	char **env;
	char **commands;
	char *history_string;
	int history_counter;

} vars_t;

extern vars_t vars;
typedef struct instruction_s
{
	char *opcode;
	void (*f)(char *second_arg);
} instruction_t;

typedef struct builtins
{
	char *name;
	void (*f)(vars_t *);
} builtins_t;

void (*check_if_match(vars_t *vars))(vars_t *vars);
void (*check_if_match2(vars_t *vars))(vars_t *vars);

/* functions */
void world(vars_t *vars);
void USA(vars_t *vars);
void china(vars_t *vars);


char **tokenizer(char *buffer, char *delimiter);
char **_realloc(char **ptr, size_t *size);

int _strcmpr(char *strcmp1, char *strcmp2);

#endif /* _crypto_ */