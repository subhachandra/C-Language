#include<stdio.h>
#include<stdlib.h>
#define NULL 0
struct linked_list
{
int num;
struct linked_list *next;
};
typedef struct linked_list node;
void main()
{
node *head;
void create(node *p);
int count(node *p);
void print(node *p);
head=(node *)malloc(sizeof(node));
create(head);
printf("\n");
print(head);
printf("\n");
printf("\n number of items =%d", count(head));
}
void create(node *list)
{
printf("input elements\n");
scanf("%d",&list->num);
if(list->num==-999)
{
list->next=NULL;
}
else
{
list->next=(node *)malloc(sizeof(node));
create(list->next);
}
return;
}
void print(node *list)
{

if(list->next!=NULL)
{
printf("%d-->",list->num);
if (list->next->next == NULL)
printf("%d", list->next->num);
print(list->next);
}
return;
}
int count(node *list)
{
if(list->next==NULL)

return(0);
else
return(1+count(list->next));

}
