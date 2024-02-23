#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int x =2;


void* routine()
{
	x+=5;
	sleep(5);
	printf("Value of x:%d\n",x);
}

void* routine2()
{
	sleep(5);
	printf("Value of x:%d\n",x);
}

int main(int argc, char* argv[])
{
	
	printf("%d",x);
	pthread_t t1,t2;
	if(pthread_create(&t1,NULL,&routine,NULL))
		return 1;
	if(pthread_create(&t2,NULL,&routine2,NULL))
		return 2;
	//sleep(15);
	if(pthread_join(t1,NULL))
		return 3;
	if(pthread_join(t2,NULL))
		return 4;
return 0;		
}
