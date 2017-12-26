#include<stdio.h>
#include<pthread.h>

/* this function is run by the second thread */
void *Mythread(void*  args)
{
printf("Inside Mythread\n");
//int *data = (int*)args;
printf("Data is %d\n",*(int*)args);
int i=20;
while(i)
{
i--;
}
return NULL;
}

int main()
{

int x=10;
pthread_t t1;
pthread_create(&t1, NULL, Mythread, &x);
int i=1000;
while(i)
{
i--;
}
pthread_join(t1, NULL);
}


