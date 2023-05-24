#include "headers.h"

/**
 * write a program that prints "$" 
 * at the start of each line 
 */

/**
 * now we know waht to do
*/

int main (int ac, char **av)
{
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
