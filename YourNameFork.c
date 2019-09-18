#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("This is before forking\n");
	fork();
	fork();
	fork();
	printf("VIRAT THE RUN MACHINE KOHLI\n");
	return 0;
}
