#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h> 
#include<unistd.h>
#define SERV_TCP_PORT 6626

 


int main()

{
        int sockfd, newsockfd, cli_len, childpid;
        struct sockaddr_in  cli_addr, serv_addr;
        char msg1[100] ="hello";
        char msg[100];
        memset(msg,'\0',sizeof(msg));
        if((sockfd = socket( AF_INET, SOCK_STREAM,0)) < 0)
                perror("server : can't open stream socket");

 

        bzero ((char *)&serv_addr, sizeof(serv_addr));
        serv_addr.sin_family            = AF_INET;
        
        serv_addr.sin_addr.s_addr       = inet_addr("127.0.0.1");
        serv_addr.sin_port              = htons(SERV_TCP_PORT);

        memset(serv_addr.sin_zero, '\0', sizeof serv_addr.sin_zero); 

        if (bind (sockfd,(struct sockaddr *)&serv_addr, sizeof( serv_addr)) < 0)
                perror("server : can't bind local address");

 

        listen(sockfd, 5);
        cli_len = sizeof(cli_addr);
        for(; ;)
        {
                newsockfd =accept(sockfd,(struct sockaddr *)&cli_addr, &cli_len);
                if(newsockfd < 0)
                        perror("server : accept error");
                send(newsockfd,msg1,sizeof(msg),0);
                recv(newsockfd, msg, sizeof(msg),0);
                printf("%s",msg);
                close(sockfd);
                exit(0);
        }
        close(newsockfd);
return 0;
}
