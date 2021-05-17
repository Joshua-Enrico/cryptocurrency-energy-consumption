#include "library.h"

void world(vars_t *vars)
{
    char *file;
    int fd, r;
    char *s;
    file = "files/world";
		fd = open(file, O_RDWR);

		s = malloc(300);
		if (s == NULL)
		{
			printf("Fatal Error");
			return;
		}
		while ((r = read(fd, s, 300)) > 0)
		{
			r = write(1, s, r);
			printf("\n");
			if (r == -1)
			{
				printf("Fatal Error");
			return;
			}
		}
		free(s);
		fd = close(fd);
        if(vars != NULL)
            check_if_match2(vars);
}

void USA(vars_t *vars)
{
    char *file;
    int fd, r;
    char *s;
    file = "files/USA";
		fd = open(file, O_RDWR);

		s = malloc(300);
		if (s == NULL)
		{
			printf("Fatal Error");
			return;
		}
		while ((r = read(fd, s, 300)) > 0)
		{
			r = write(1, s, r);
			printf("\n");
			if (r == -1)
			{
				printf("Fatal Error");
			return;
			}
		}
		free(s);
		fd = close(fd);
    if(vars != NULL)
        check_if_match2(vars);
}

void china(vars_t *vars)
{
    char *file;
    int fd, r;
    char *s;
    file = "files/china";
		fd = open(file, O_RDWR);

		s = malloc(300);
		if (s == NULL)
		{
			printf("Fatal Error");
			return;
		}
		while ((r = read(fd, s, 300)) > 0)
		{
			r = write(1, s, r);
			printf("\n");
			if (r == -1)
			{
				printf("Fatal Error");
			return;
			}
		}
		free(s);
		fd = close(fd);
    if(vars != NULL)
        check_if_match2(vars);
}

void china(vars_t *vars)
{
    printf("Countries aviable");
    printf("\n");
    printf("Countries aviable");

}