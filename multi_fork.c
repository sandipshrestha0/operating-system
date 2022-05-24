// use of multiple fork()
#include<stdio.h>
#include<unistd.h>
void main()
{
	printf("Before first forking statement\n");
	fork();
	printf("after first forking statement\n");
	fork();
	printf("after second forking statement\n");
	printf(" \t\t process %d\n", getpid());
}
