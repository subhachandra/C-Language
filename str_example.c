#include<stdio.h>
struct invent
{
char name[10];
int number;
float price;
};
int main()
{
struct invent product[2],*ptr;
ptr=product;
ptr->name;
ptr->number;
ptr->price;
for(ptr=product;ptr<product+2;ptr++)
{
scanf("%s %d %f",ptr->name,ptr->number,ptr->price);
}
ptr=product;
while(ptr<product+3)
{
printf("%s %d %f",ptr->name,ptr->number,ptr->price);
ptr++;
}

return 0;
}
