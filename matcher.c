#include "library.h"
void (*check_if_match(vars_t *vars))(vars_t *vars)
{
	unsigned int i;
	builtins_t check[] = {
        {"USA", USA},
        {"world", world},
        {"china", china},
        {"list", list},
		{NULL, NULL}};

    if(vars->array_tokens[0] == NULL)
        return (0);

	for (i = 0; check[i].f != NULL; i++)
	{
		/** vars->array_tokens esta accediendo a los argumentos para el match */
		if (_strcmpr(vars->array_tokens[0], check[i].name) == 0)
        {
            	if (check[i].f != NULL)
		        check[i].f(vars);
               return(0);
        }
    }
    return(0);
}

void (*check_if_match2(vars_t *vars))(vars_t *vars)
{
	unsigned int i;
	builtins_t check[] = {
        {"USA", USA},
        {"world", world},
        {"china", china},
        {"list", list},
		{NULL, NULL}};

    if(vars->array_tokens[1] == NULL)
        return (0);
    
	for (i = 0; check[i].f != NULL; i++)
	{
		/** vars->array_tokens esta accediendo a los argumentos para el match */
		if (_strcmpr(vars->array_tokens[1], check[i].name) == 0)
        {
                vars = NULL;
            	if (check[i].f != NULL)
		        check[i].f(vars);
               return(0);
        }
	}
    vars = NULL;
    return (0);
}

int _strcmpr(char *strcmp1, char *strcmp2)
{
	int i;

	i = 0;
	while (strcmp1[i] == strcmp2[i])
	{
		if (strcmp1[i] == '\0')
			return (0);
		i++;
	}
	return (strcmp1[i] - strcmp2[i]);
}