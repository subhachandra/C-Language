#include<stdio.h>
#include<stdlib.h>
void main()
{
int m=2,n=2,i=0,j=0;
//printf("enter no.of rows and no.of columns");
//scanf("%d%d", &m,&n);
int **a;
a=(int**)malloc(m*sizeof(int*));
for(i=0;i<=m;i++)
{
a[i]=(int*)malloc(n*sizeof(int));
}
//printf("enter elements");
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
   a[i][j] = j;
//   printf("%d\n",a[i][j]);
  }
}
//printf("enter elements");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\n",a[i][j]);
}
}
}
