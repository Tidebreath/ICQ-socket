#include<iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
using namespace std;
int main()
{
    //创建套接字
    int ser_socket=socket(AF_INET,SOCK_STREAM,0);
    //bind信息
    struct sockaddr_in ser_addr;
    ser_addr.sin_addr.s_addr=htonl(INADDR_ANY);
    ser_addr.sin_family=AF_INET;
    ser_addr.sin_port=htons(22516);
    if(bind(ser_socket,(struct sockaddr*)&ser_addr,sizeof(ser_addr))<-1)
    {
        //报错
        perror("bind:");
        return -1;
    }
    else cout<<"bind() done"<<endl;
    //开始监听
    if(listen(ser_socket,SOMAXCONN)<-1)
    {
        perror("listen:");
        return -1;
    }
    int 
  

    



}