#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <time.h>
int shared_val = 0;
pthread_mutex_t mutex; //declare mutex
//Thread Routine 

void* routine() 
{
    for (int i = 0; i < 1000000000; i++) {
        pthread_mutex_lock(&mutex);
        shared_val++;    //critical section - ensured mutual exclusion using mutex
        pthread_mutex_unlock(&mutex);
    }
}

int main(int argc, char* argv[]) {
    time_t begin = time(NULL);
    pthread_t t1, t2, t3, t4; 
    pthread_mutex_init(&mutex, NULL);
    if (pthread_create(&t1, NULL, &routine, NULL) != 0) {
        return 1;
    }
    if (pthread_create(&t2, NULL, &routine, NULL) != 0) {
        return 2;
    }
   
    if (pthread_join(t1, NULL) != 0) {
        return 3;
    }
    if (pthread_join(t2, NULL) != 0) {
        return 4;
    }
  
    pthread_mutex_destroy(&mutex);
    printf("Number of times loop executed: %d\n", shared_val);
    time_t end = time(NULL);
    printf("Total time to execute the program is %ld seconds\n", (end-begin));
    return 0;
}
