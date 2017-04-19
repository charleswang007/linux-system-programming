#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

void ForkAndWait();
void PrintStatus(FILE *wfp, int mypid, int status);


int main() {
	fprintf(stderr, "My PID is %d.\n", (int) getpid() );
	ForkAndWait();
	ForkAndWait();
	ForkAndWait();
}

void ForkAndWait() {
	pid_t mypid;
	int status;
	mypid = fork();

	switch ((int) mypid) {
		case -1:
			fprintf(stderr, "Err: fork() failed:%s\n", strerror(errno));
			break;
		case 0:
			fprintf(stderr, "Child Process!\n");
			sleep(15);
			_exit(0);
			break;
		default:
			fprintf(stderr, "Parent Process!\n");
			sleep(4);
			kill(mypid,2);
			mypid=wait(&status);
			PrintStatus(stdout, mypid,status);
			sleep(60);
			exit(0);
	}
}

void PrintStatus(FILE *wfp, int mypid, int status) {

	fprintf(wfp, "\n");
	fprintf(wfp, "%6d = wait()", mypid);

	if (WIFEXITED(status)) {
		fprintf(wfp, " -- Exit Status = %3d\n", WEXITSTATUS(status));
	}

	if (WIFSTOPPED(status)) {
		fprintf(wfp, " -- Stop Signal = %3d\n", WSTOPSIG(status));
	}

	if (WIFSIGNALED(status)) {
		fprintf(wfp, " -- Exit Signal = %3d\n", WTERMSIG(status));
		fprintf(wfp, "Core Dump : %s\n", WCOREDUMP(status) ? "Yes" : "No");
	}

}
