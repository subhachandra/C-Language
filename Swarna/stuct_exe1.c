#include<stdio.h>

typedef struct mystr
{
int a1:3;
int i:4;
//char c;
//int d:2;
char c;
char a;
}MyStr;
void main()
{ 
//printf("str is : \n  %p",str);
//str.i=10;
//str.c='a';
//printf("%d %c",str.i,str.c );
MyStr str;
printf("%lu",sizeof(str));
//printf("\n d val is : %d",str.d);
printf("\n");

}

