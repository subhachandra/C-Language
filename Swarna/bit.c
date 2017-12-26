#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,n1,n2;
printf("enter number");
scanf("%d",&n);
n1=1<<2|n;
n2=1<<2&n;
printf("%d\n%d",n1,n2);
}
