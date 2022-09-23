#include <iostream>
#include <ws2tcpip.h>
#include <winsock2.h>

#pragma comment (lib,"ws2_32.lib")

using namespace std;

int main()
{
    //Init winsock
    WSADATA wsData;
    WORD ver = MAKEWORD(2,2);

    int wsOk = WSAStartup(ver, &wsData);
    if(wsOk != 0){
        cerr << "Can't Initialize winsock" << endl;
        return 0;
    }

    // create a socket
    SOCKET listening = socket(AF_INET,SOCK_STREAM,0);
    if(listening == INVALID_SOCKET){
        cerr << "Can't create a socket" << endl;
        return 0;
    }

    // Bind the socket to an ip address and port
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(54000);
    hint.sin_addr.S_un.S_addr = INADDR_ANY;

    bind(listening,(sockaddr*)&hint,sizeof(hint));

    // Tell Winsock the socket is for listening
    listen(listening,SOMAXCONN);

    // wait for a connection
    sockaddr_in client;
    int clientSize = sizeof(client);

    SOCKET clientSocket = accept(listening,(sockaddr*)&client,&clientSize);

    char host[NI_MAXHOST]; //client 's remote name
    char service[NI_MAXHOST]; //service (i.e. port) the client is connect on

    ZeroMemory(host,NI_MAXHOST);
    ZeroMemory(service,NI_MAXHOST);

    if(getnameinfo((sockaddr*)&client,sizeof(client),host,NI_MAXHOST,service,NI_MAXSERV,0) == 0){
        cout << host << " connected on port " << service << endl;
    }
    else{
        inet_ntop(AF_INET,&client.sin_addr,host,NI_MAXHOST);
        cout << host << " connected on port " << ntohs(client.sin_port) << endl;
    }

    // close listening socket
    closesocket(listening);

    //while loop: accept and echo message back to client
    char buf[4096];
    while(true)
    {
        ZeroMemory(buf,4096);

        //Wait for client to send data
        int bytesReceived = recv(clientSocket,buf,4096,0);
        if(bytesReceived == SOCKET_ERROR){
            cerr << "Error in recv(). Quitting" << endl;
            break;
        }

        if(bytesReceived == 0){
            cout << "Client disconnected" << endl;
            break;
        }

        //Echo message back to client

        send(clientSocket,buf,bytesReceived + 1,0);
    }

    // Close the sock
    closesocket(clientSocket);

    // Shutdown winsock
    WSACleanup();

    return 0;
}
