#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
	if(atoi(argv[2]) <= 100 && atoi(argv[2]) >= 0)
		setPriority(atoi(argv[1]), atoi(argv[2]));
	else
		printf(1,"Priority is between [0,100]");

	exit();
}