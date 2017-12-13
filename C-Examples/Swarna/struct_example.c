#include<stdio.h>


typedef struct mystr
{
  char c;
  int i:1;
  char a;
}MyStr;

void main()
{
//struct mystr str;
MyStr str;
//str.i =10;
//str.a ='a'; 
printf("i=%d  a=%c size=%lu\n", str.i,str.a,sizeof(str));
}

