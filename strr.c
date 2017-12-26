#include<stdio.h>
#include<string.h>
void main()
{
char s[1000],*ptr;
int  i=0,len;
printf("enter string\n");
scanf("%s",s );
ptr=s;
//char* rev_str  = strrev(s);
for(i=0;i<10;i++){
printf("i value %d\n", i);
if(*ptr =='\0'){
 break;
}else{
ptr++;
}
}
printf("i value %d\n", i);
len =i;
ptr--;
for(i=len-1;i>0;i--)
{
printf("%c",*ptr--);
}
}
/*while(*ptr!='\0')
{
ptr++;
i++;
}

while(i>=0)
{
printf("%c",*ptr--);
i--;
}

}*/
