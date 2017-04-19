#include <stdio.h>
#include <string.h>

int main() {

	char *str="Hello World";
	char buf[50];

	int fd[2];
	int rc,rcrd,rcwr,pid;

	if ((rc=pipe(fd))>-1) {

		switch (pid=fork()) {
			case -1:
				fprintf(stderr,"Fork failed.\n");
				return 0;
				break;	
			case 0:
				close(fd[1]);	// child closes write fd. child is consumer.
				rcrd=read(fd[0],buf,sizeof(buf));
				if (rcrd>0) buf[rcrd]=0;
				fprintf(stderr,"Got child(PID=%d) .. \"%s\".\n",getpid(),buf);
				break;
			default:
				close(fd[0]);	// parent closes read fd. parent is producer.
				system("ps -f");
				sprintf(buf,"%s .. from PID '%d'",str,getpid());
				rcwr=write(fd[1],buf,strlen(buf));
				system("ps -f");
				break;	
		}	
	}	

	return 0;
}
