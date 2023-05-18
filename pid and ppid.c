#include <unistd.h>
#include <stdio.h>

/**
 * pid - PID main function
 * 
 * Return - always 0
*/

int main ()
{
    pid_t mypid, myppid;

    mypid = getpid();
    myppid = getppid();
    printf("My pid: %d\nMy ppid: %d\n", myppid, mypid);
    return 0;
}