#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int sum;


void* addition()
{
	int num1, num2;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	sum = num1 + num2;
	sleep(2);
	printf("Value of sum:%d\n",sum);
}

void* multibyfive()
{
	int mul=sum*5;
	//sleep(5);
	printf("Value of mul:%d\n",mul);
}

int main(int argc, char* argv[])
{

	pthread_t t1,t2;
	if(pthread_create(&t1,NULL,&addition,NULL))
		return 1;
	//sleep(15);
	if(pthread_join(t1,NULL))
		return 3;
	if(pthread_create(&t2,NULL,&multibyfive,NULL))
		return 2;
	if(pthread_join(t2,NULL))
		return 4;
return 0;		
}
