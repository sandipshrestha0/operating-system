// single process and display their id.
#include<stdio.h>
#include<unistd.h>
int main(void)
{
	printf("Hello world! \n");
	fork();
	printf("After forking \n");
	printf("\t process %d \n",getpid());
}
