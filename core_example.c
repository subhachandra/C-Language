#include<stdio.h>
#include<string.h>
//#include<stdlib.h>

void main()
{
	char* str1 = "hello";
        char* str2 = NULL;
//        str2 = malloc(sizeof(char)*10);
        strcpy(str2,str1);
	printf("data is %s\n", str2);
//        free(str2);
}
