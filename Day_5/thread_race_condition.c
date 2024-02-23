#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<time.h>

int countval = 0;

void* routine()
{
	for(int i=0; i<1000000000;i++)
	{
		countval++;
	}
}


int main(int argc, char* argv[])
{	
	time_t begin = time(NULL);
	pthread_t t1,t2;
	if(pthread_create(&t1,NULL,&routine,NULL)!=0)
	{
		return 1;
	}
	if(pthread_join(t1,NULL)!=0)
	{
		return 3;
	}
	if(pthread_create(&t2,NULL,&routine,NULL)!=0)
	{
		return 2;
	}
	
	if(pthread_join(t2,NULL)!=0)
	{
		return 4;
	}
	
	printf("Number of times loop executed %d\n",countval);
	time_t end = time(NULL);
    	printf("Total time to execute the program is %ld seconds\n", (end-begin));
	return 0;

}	
