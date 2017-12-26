#include<stdio.h>
#include<stdlib.h>
 struct node
{
int data;
struct node *next;
};
struct node* insert(struct node *head,int n)
{
struct node *new=(struct node*)malloc(sizeof(struct node));
new->data=n;
new->next=NULL;
struct node *temp=head;
if(head==NULL)
{
head=new;

}
else
{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=new;
}
return head;
}
void print(struct node *head)
{
struct node *c=head;
while(c!=NULL)
{

printf("the values are-->%d\n",c->data);
c=c->next;
}
}
void main()
{
struct node *head=NULL;
head=insert(head,1);
head=insert(head,2);
head=insert(head,3);
head=insert(head,4);
head=insert(head,5);
print(head);
}


