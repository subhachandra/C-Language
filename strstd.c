#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
struct student
{
    char name[30];
    int roll;
    float perc;
};
 
int main()
{
    struct student *pstd;
     
    /*Allocate memory dynamically*/
    pstd=(struct student*)malloc(1*sizeof(struct student));
     
    if(pstd==NULL)
    {
        printf("Insufficient Memory, Exiting... \n");
        return 0;
    }
     
    /*read and print details*/
    printf("Enter name: ");
 /*for (int i = 0; i < sizeof(char); i++)
{
        printf("%c",pstd->name[i]);
}*/
   scanf("%s",pstd->name);
  
  printf("Enter roll number: ");
    scanf("%d",&pstd->roll);
    printf("Enter percentage: ");
    scanf("%f",&pstd->perc);
     
    printf("\nEntered details are:\n");
    printf("Name: %s, Roll Number: %d, Percentage: %.2f\n",pstd->name,pstd->roll,pstd->perc);
      
    return 0;
}
