#include<stdio.h>
#include<stdlib.h>
//#define NULL 0
struct node
{
int data;
struct node *next;
}*front=NULL,*rear=NULL;
void insert(int);
void delete();
void display();
void main()
{
int ch,n;
while(1)
{
printf("queue program\n");
printf("1.insert\n2.delete\n3.display\n4.exit\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter number");
scanf("%d",&n);
insert(n);
break;
case 2:
delete();
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
void insert(int n)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=n;
newnode->next=NULL;
if(front==NULL)
front=rear=newnode;
else{
rear->next=newnode;
rear=newnode;
printf("element inserted\n");
}
}
void delete()
{
if(front==NULL)
printf("queue empty\n");
else{
struct node *temp=front;
front=temp->next;
printf("deleted element is %d\n",temp->data);
}
}
void display()
{
if(front==NULL)
printf("queue empty\n");
else
{
struct node *temp=front;
while(temp->next!=NULL)
{
printf("%d-->",temp->data);
temp=temp->next;
}
printf("%d-->NULL\n",temp->data);
}
}
