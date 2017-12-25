#include<stdio.h>
void main()
{

int a[5] ={1,2,3,4,5};
int i=0;
printf("%lu\n",sizeof(a));
//a[2] =10;
for(;0;)
{
printf("%d",i);
}

/*while(i<5)
{
//printf("%d",a[i]);
i++;
}*/

do
{
printf("%d\t",a[i]);
i++;
}while(i<5);

}
