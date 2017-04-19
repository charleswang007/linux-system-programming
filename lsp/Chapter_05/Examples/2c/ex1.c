#include <stdio.h>
#include <signal.h>
#include <errno.h>

int main() {
	int c;

	// ignore ^C
	signal(SIGINT,SIG_IGN);
	fprintf(stderr, "PID=%d. Enter char(it ignores ^C):\n", getpid());

// 	while ((c=getchar())!=EOF) {
// 		putchar(c);
// 	}
  c=getchar();

	signal(SIGINT,SIG_DFL);
	fprintf(stderr, "EOF Entered!  End Program!!:\n");

	return 0;
}
