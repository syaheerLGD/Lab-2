#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void jobIsDone() {
	printf("\nJob Is Done\n\n");
}

int main (void) {
	char name[30];

	for(int i = 0; i <4; i++) {
		int a = fork();

		if(a==0) {
			printf("\nEnter Name : ");
			scanf("%s", name);
			printf("Your name is %s\n", name);
			exit(0);
		}
		else {
			wait(NULL);
		}
	}
	jobIsDone();
	return (0);
}
