#include<stdio.h>
#include<stdlib.h>
#include"slinked.h"

void insert(Node* head, int cnt)
{
int n,i;
printf("enter elements");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(cnt==0)
{
printf("entervalues");
}
else{
Node *new=(Node*)malloc(sizeof(Node));
new->data=n;
new->next=NULL;
struct node *temp=head;
if(head == NULL)
{
head= new;
}
else
{
//temp =head;
while(temp->next!=NULL)
{
temp=temp->next;
//temp->next=new;
}
temp->next=new;
}
}
}
}
void reverse(Node *head )
{
Node *next;
Node *pre=NULL;
Node *current=head;
while(current!=NULL)
{
next=current->next;
current->next=pre;
pre=current;
current=next;
return head;
}
head=pre;
}
void display(Node* head)
{
Node* current=head;
while(current!=NULL)
{
printf("nodse are--> %d",current->data);
current=current->next;
} 
}
