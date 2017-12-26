#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
int fd[2],n;
pid_t pid;
char str[]="this is pipe";
char readbuffer[30];
pipe(fd);
pid=fork();
if(pid==0)
{
printf("this is in child");
close(fd[0]);
write(fd[1], str, (strlen(str)+1));
exit(0);
}
else
{
printf("this is in parent");
n = read(fd[0], readbuffer, sizeof(readbuffer));
printf("Received string: %s", readbuffer);
}
return 0;
}
