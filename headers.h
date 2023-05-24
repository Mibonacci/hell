#ifndef _HEADERS_H_
#define _HEADERS_H_

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <sys/wait.h>

typedef struct pathing
{
	char *path;
	unsigned int len;
	struct pathing *next;
} pathing;



#endif
