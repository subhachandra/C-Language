#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
void push(int n)
{
//struct node *top;
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=n;
if(top==NULL)
{
top->next=NULL;
}
else{
newnode->next=top;
top=newnode;
printf("element inserted");
}
}
void pop()
{
//struct node *top;
if(top==NULL)
{
printf("stack is empty");
}
else{
struct node *temp=top;
printf("poped element is %d",temp->data);
top=temp->next;
free(temp);
}
}
void display()
{
//struct node *top;
if(top==NULL)
{
printf("stack empty");
}
else{
struct node *temp=top;
while(temp->next!=NULL)
{
printf("%d--->",temp->data);
temp=temp->next;
}
printf("%d-->",temp->data);
}
}
