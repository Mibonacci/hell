#include "headers.h"
#include "getline.c"

char **surroundings(char *str)
{
    char *tokn, **tokns;
    int x = 0;

    tokn = strtok(str, " ");
    while (tokn != NULL)
    {
        //same thing with if
        tokns = (char **)malloc(sizeof(char *) * (x + 2));
        tokns[x] = tokn;
        tokns[x + 1] = NULL;
        x++;
        tokn = strtok(NULL, " ");
    }

    for (x = 0; tokns[x]; x++)
    {
        printf("%s\n", tokns[x]);
    }
    return (tokns);
}
int main (int argc, char **argv)
{
    (void)argc;
    (void)argv;

    char *buffer = NULL;
    size_t size_buff = 0;
    int n_char = 0;
    

    write(1, "$ ", 2);
    while (getline(&buffer, &size_buff, stdin) != -1)
    {
        n_char = strlen(buffer);
        write(1, buffer, n_char);
        write(1, "\n", 1);
    }
        free(buffer);
        return 0;
}