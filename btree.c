#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node* insert(struct node *,int);
void display(struct node *);
int count=0;
struct node *insert(struct node *root,int item)
{
struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data = item;
if(root==NULL)
{		
	node->left = NULL;
	node->right = NULL;
	root=node;		
count++;
}
else{
if(count%2!=0)
root->left=insert(root->left,item);
else
root->right=insert(root->right,item);
	}
	 return(root);
}

void display(struct node *root)
{
if(root!=NULL)
{
display(root->left);
printf("%d\n",root->data);
display(root->right);
}
}
void main()
{
struct node *root=NULL;
int ch;
while(1)
{
printf("1.insert\n");
printf("2.display\n");
printf("3.exit\n");
printf("enter u r choice\n");
scanf("%d",&ch);
switch(ch)
{
int item;
case 1:
printf("enter the value");
scanf("%d",&item);
root=insert(root,item);

break;
case 2:
display(root);
break;
case 3:exit(0);
default:
printf(" u r choice is wrong");
}
}
}
