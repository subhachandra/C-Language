#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
pthread_mutex_t count_mutex =PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t condition_var=PTHREAD_COND_INITIALIZER;
int count=0;
#define MAX 10
void *even();
void *odd();
void main()
{
printf("in main \n");
pthread_t t1,t2;
pthread_create(&t1,NULL,&even,NULL);
pthread_create(&t2,NULL,&odd,NULL);
pthread_join(t1,NULL);
//pthread_join(t2,NULL);
exit(0);
}
void *odd()
{
for(;count<=MAX;){
printf("33333\n");
pthread_mutex_lock(&count_mutex);
if(count%2==1)
{
pthread_cond_wait(&condition_var,&count_mutex);

}
printf("444444444\n");
count++;
printf("odd numbers are :%d\n",count);
pthread_cond_signal(&condition_var);
pthread_mutex_unlock(&count_mutex);
}
}

void *even()
{
printf("11111111\n");
for(;count<=MAX;)
{
pthread_mutex_lock(&count_mutex);
if(count%2==0)
{
printf("222222\n");
pthread_cond_wait(&condition_var,&count_mutex );
}
printf("55555\n");
count++;
printf("even numbers are :%d\n",count);
pthread_cond_signal(&condition_var);
pthread_mutex_unlock(&count_mutex);
}
}
