#include "library.h"
vars_t vars;


int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
    size_t len_buffer  = 0;

    printf("This is a program in which you can buy the consumption of each type of cryptocurrency\n");
    printf("\n");
    printf("Usage: 'crypto1' 'crypto2' or 'crypto' 'contry' \n");
    printf("\n");
    printf("Run: list to see the available currencies and countries\n");
    printf("$ ");

    while (getline(&(vars.buffer), &len_buffer, stdin) != -1)
    {
        vars.array_tokens = tokenizer(vars.buffer, "\n\t\r ");
        
        check_if_match(&vars);
        printf("$ ");
    }
    exit(1);
}