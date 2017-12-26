#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
pthread_mutex_t a_mutex=PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cv=PTHREAD_COND_INITIALIZER;

void *first();
void *second();
void main()
{
printf("in main");
pthread_t t1,t2;
pthread_create(&t1,NULL,&first,NULL);
pthread_create(&t2,NULL,&second,NULL);
pthread_join(t1,NULL);
pthread_join(t2,NULL);
}
void *first()
{
while(1)
{
printf("in first");
pthread_mutex_lock(&a_mutex);
pthread_cond_wait(&cv,&a_mutex);

a[1]=10;

pthread_mutex_unlock(&a_mutex);
pthread_cond_signal(&cv);
}
printf("abc");
}

void *second()
{
while(1)
{
printf("in second");
pthread_mutex_lock(&a_mutex);
pthread_cond_wait(&cv,&a_mutex);
int a[]={};
printf("array value %d\n",a[0]);
pthread_cond_signal(&cv);
pthread_mutex_unlock(&a_mutex);
}
}

