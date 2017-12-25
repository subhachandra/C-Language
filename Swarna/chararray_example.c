#include<stdio.h>
void main()
{
char c[6]={'a','f','e','b','c','d'};
int i;
//int a[3]={1,2,3};
char b[6]={'a','z','x','b','c','d'};

//printf("%lu\n", sizeof(c));
//printf("%c\n",c[i]);
for(int i=0;i<sizeof(b);i++)
{
/*if(b[i]==2)
{
b[2]=='e';
}*/

if(i == 1 || i == 2){


} else {
printf("%c\n",b[i]);
//i++;
}
/*for(int i=2;i<sizeof(a);i--)
{

printf("%d\n",a[i]);


}*/
}
}
