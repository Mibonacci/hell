#include "headers.h"

/**
 * printing the process id and the parent pid
 * printing all the arguments without using ac
 * 
 * Return - always 0
*/

int main (int ac, char **av)
{
    pid_t mypid, myppid;
    (void)ac;
    int i = 0;
    mypid = getpid();
    myppid = getppid();

    while (av[i] != NULL, av[i])
    {
        printf("%s\n", av[i]);
        i++;
    }
    printf("My pid: %d\nMy ppid: %d\n", myppid, mypid);
    return 0;
}