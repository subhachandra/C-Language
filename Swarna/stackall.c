#include<stdio.h>
#include<stdlib.h>
//#define NULL 0
struct node
{
int data;
struct node *next;
}*top=NULL;
void push(int);
void pop();
void display();
void main()
{
int ch,n;
while(1)
{
printf("stack program\n");
printf("1.push\n2.pop\n3.display\n4.exit\n");
printf("enter your choice");
scanf("%d",&ch);
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
void push(int n)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=n;
if(top==NULL)
newnode->next=NULL;
else
newnode->next=top;
top=newnode;
printf("element inserted\n");

}
void pop()
{

if(top==NULL)
{
printf("stack is empty\n");
}
else{
struct node *temp=top;
printf("poped element is %d\n",temp->data);
top=temp->next;
free(temp);
}
}
void display()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct node *temp = top;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL",temp->data);
   }
}    
    
