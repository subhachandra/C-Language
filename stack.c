#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
/*struct node
{
int data;
struct node *next;
}*top=NULL;*/
void main()
{
struct node *top;
int ch,n;
printf("stack program\n");
printf("1.push\n,2.pop\n3.display\n4.exit");
printf("enter your choice");
scanf("%d",&ch);
while(1)
{
switch(ch)
{
case 1:
printf("enter number");
scanf("%d",&n);
push(n);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:exit(0);
default:
printf("your choice is wrong");
}
}
}
