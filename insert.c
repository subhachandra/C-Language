#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
//struct node* insert(struct node *head,int n)
struct node*  insert(struct node *head,int n)
{

struct node *new=(struct node*)malloc(sizeof(struct node));
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
return head;
}
void print(struct node *head)
{
struct node *current=head;
while(current!=NULL)
{
printf(" in data----->  %d\n",current->data);
printf("address is :%p\n",current->next);
current=current->next;
}
}
/*void delete(struct node *head)
{
struct node *temp=head,*t;
if(head==NULL)
{
printf("no node found");
}
else
{
while(temp->next!=NULL)
{
t=temp;
temp=temp->next;
}
free(t->next);
t=t->next;
//printf("deleted node is: %d\n", t->data);

}*/
struct node *insertnew(struct node *head,int n)
{
struct node *new=(struct node*)malloc(sizeof(struct node));
new->data=n;
new->next=NULL;
struct node *temp=head,*t;
if(head==NULL)
{
printf("not found");
}
else{
while(temp->data!=2&&temp->next!=NULL)
{
temp=temp->next;
}
t=temp->next;
temp->next=new;
new->next=t;
}
return head;
}
struct node *deletenode(struct node *head ,int n)
{
struct node *temp=head,*t;
if(head==NULL)
{
printf("no nodes");
return head;
}
while(temp->next!=NULL)
{
if(temp->next->data==2);
{
t=temp->next;
temp->next=t->next;
free(t);
return head;
}
temp=temp->next;
}
}
struct node *reverse(struct node *head )
{
struct node *next;
struct node *pre=NULL;
struct node *current=head;
while(current!=NULL)
{
next=current->next;
current->next=pre;
pre=current;
current=next;
return head;
}
&head=pre;
return head;
}

void main()
{
struct node *head;
//printf("main start head is %p\n",head);
head=insert(head,1);
//printf("main1 start head is %p\n",head);
head=insert(head,2);
//printf("main2 start head is %p\n",head);
head=insert(head,3);
//printf("main3 start head is %p\n",head);
//print(head);
//head=insertnew(head,4);
//print(head);
//delete(head);
//head=deletenode(head,2);

print(head);
head=reverse(head);
print(head);
}

