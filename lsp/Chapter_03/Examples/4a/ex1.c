#include <stdio.h>

int main()
{
	int i=0;

	while (1)
	{
		fprintf(stderr,"Hello ... %d\n", i++);
		sleep(3);
	}
}
