// page 14 example #4

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

	int i=0;
	char *var;

	var=getenv("PARM");

	printf("%s=%s\n","PARM",var);

	exit(0);

}
