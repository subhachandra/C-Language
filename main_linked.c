#include<stdio.h>
#include<stdlib.h>
#include"slinked.c"

void main()
{
   Node* head;
   int i=0,cnt=0;
   printf("Please enter your choicei 1.insert \n 2.reverse \n 3.display\n");
   scanf("%d",&i);
   switch(i)
   {
      case 1:
      {
         printf("Please Enter no of elements to be inserted");
         scanf("%d",&cnt);
         insert(head,cnt);
      }
      break;
    case 2:
	{
	printf("reverse linked list");
	reverse(head);
	}
	break;		
      case 3:
      {
         display(head);
      }
      break;
      default:
         printf("Your choise is invalid");
   }

}
