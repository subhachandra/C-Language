#include<stdio.h>
#include<stdlib.h>
#define NULL 0
//void insert(node *n);
//void display(node *n);
struct mynode
{
int data;
struct mynode *next;
};

typedef struct mynode node;
/*void add(struct node *n)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=n;
    if (head== NULL)
    {
    head=temp;
    head->next=NULL;
    }
    else
    {
    temp->next=head;
    head=temp;
    }
}*/

 
/*void insert(struct node *n)
{
    int c=0;
    struct node *temp;
    temp=head;
    if(temp==NULL)
    {
    add(n);
    }
    else
    {
    while(temp!=NULL)
    {
        if(temp->data<n)
        c++;
        temp=temp->next;
 } 
}
} */

void insert(node *n)
{
printf("enter input vlaues\n");
scanf("%d",&n->data);
//int b= n->data;
//printf("entered data is %d \n",n->data);

//printf("d val is  %d :\n",d);
if(n->data == -999)
{
n->next = NULL;
//printf("in if condition");
//printf("no data found");
}
else
{
//printf("in else");
n->next = (node *)malloc(sizeof(node));
insert(n->next);
 
}
//printf("before return");
return;
}
void  display(node *n)
{
//   printf("in display");
    if(n->next!=NULL)
    {   
        printf("%d-->",n->data);
   
 if(n->next->next==NULL)
   
    printf("%d",n->next->data);
 
  display(n->next);
}
return;
}

void main()
{
int ch;
//node *n;
//struct mynode *node;
node *head;
head=(node *)malloc(sizeof(node));
printf("1. insert\n");
//printf("2.delete");
printf("2.display\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
//printf("enter the number to insert");
//scanf("%d",&n);
insert(head);
case 2:
printf("disply elements");
display(head);
break;
default:
printf("your chioce is wrong");
}
}
