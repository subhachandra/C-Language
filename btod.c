#include<stdio.h>
#include<math.h>
void main()
{
int bin,i=0,s=0,r;
printf("enter binary numder");
scanf("%d",&bin);
while(bin)
{
r=bin%10;
s=s+2^i*r;
bin=bin/10;
i++;
}
printf("%d",s);
}
