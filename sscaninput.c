#include "headers.h"

/**
 * scaninput - this fucntion scans the input input 
 * from the user, handling also the $ prompt at the start of each line
 * 
*/

char *scaninput(pathing *current)
{
	ssize_t read;
	size_t a = 0;
	char *input = NULL;

    write(1, "$ ", 2);
	read = getline((&input, &a, stdin) != -1);
	
	if (read == 1 && input[0] == '\n')
	{
		free(input);
		return (NULL);
	}
    
    /*to escape the EOF loop*/
    if (read == EOF)
	{
		write(STDOUT_FILENO, "\n", 1);
		free_list(current);
		free(input);
		exit(0);
	}
	input[read - 1] = '\0';

	return (input);
}