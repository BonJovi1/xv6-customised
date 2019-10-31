#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
	int i,j;
	for(i = 1; i < argc; i++)
  	{
		for(j=0; j<strlen(argv[i]); j++)
		if( argv[i][j]>=97 && argv[i][j]<=122 )//small case alphabets
			argv[i][j]-=32;
		else if( argv[i][j]>=65 && argv[i][j]<=90 )//capital alphabets
			argv[i][j]+=32;
		printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
  	}
	exit();
}