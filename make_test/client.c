#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#define SERV_TCP_PORT 6606

 

int main()
{
        int  sockfd,i;
        struct sockaddr_in    serv_addr;
        char msg[100] = "hai";
        char msg1[100];
        memset(msg1, '\0', sizeof(msg1));
        bzero ((char *) &serv_addr, sizeof(serv_addr));
	serv_addr.sin_family           = AF_INET;
        serv_addr.sin_addr.s_addr      = inet_addr("127.0.0.1"); 
        serv_addr.sin_port             = htons(SERV_TCP_PORT);

        memset(serv_addr.sin_zero, '\0', sizeof serv_addr.sin_zero);  
 

        if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0 )
                perror("client  : can't open the stream socket ");
        printf("%d",sockfd);

 

        if ((connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr))) < 0)
                perror("client:can't connect to server");

 

        send(sockfd,msg,sizeof(msg),0);
        recv(sockfd,msg1,sizeof(msg1),0);
        printf("%s",msg1);
        close(sockfd);
        exit(0);
return 0;
}
