#include<stdio.h>
#include<pthread.h>
void *even(void* args)
{
int i;
for(i=1;i<=100;i++)
{
if(i%2==0)
{
printf("even numbers are :%d\n",i);
}
}
}
void *odd(void* args)
{
int i;
for(i=1;i<100;i++)
{
if(i%2==1)
{
printf("odd nymbers are :%d\n",i);
}
}
}
void main()
{
pthread_t t1;
pthread_create(&t1,NULL,even,NULL);
pthread_join(t1,NULL);
pthread_t t2;
pthread_create(&t2,NULL,odd,NULL);
pthread_join(t2,NULL);
}
