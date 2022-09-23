#define WIN32_LEAN_AND_MEAN

#define _WIN32_WINNT  0x501

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;



// Need to link with Ws2_32.lib, Mswsock.lib, and Advapi32.lib
#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")


#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "8888"

int __cdecl main(int argc, char **argv)
{
WSADATA wsaData;
SOCKET ConnectSocket;
struct addrinfo *result = NULL,
                *ptr = NULL,
                hints;
char sendbuf[1000];
char recvbuf[DEFAULT_BUFLEN];
int iResult, activity;
int recvbuflen = DEFAULT_BUFLEN;

// Validate the parameters
if (argc != 2) {
    printf("usage: %s server-name\n", argv[0]);
    return 1;
}

// Initialize Winsock
iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
if (iResult != 0) {
    printf("WSAStartup failed with error: %d\n", iResult);
    return 1;
}

ZeroMemory( &hints, sizeof(hints) );
hints.ai_family = AF_UNSPEC;
hints.ai_socktype = SOCK_STREAM;
hints.ai_protocol = IPPROTO_TCP;

// Resolve the server address and port
iResult = getaddrinfo(argv[1], DEFAULT_PORT, &hints, &result);
if ( iResult != 0 ) {
    printf("getaddrinfo failed with error: %d\n", iResult);
    WSACleanup();
    return 1;
}

// Attempt to connect to an address until one succeeds
for(ptr=result; ptr != NULL ;ptr=ptr->ai_next) {

    // Create a SOCKET for connecting to server
    ConnectSocket = socket(ptr->ai_family, ptr->ai_socktype, ptr->ai_protocol);
    //printf("%d\n",ConnectSocket);
    if (ConnectSocket == INVALID_SOCKET) {
        printf("socket failed with error: %ld\n", WSAGetLastError());
        WSACleanup();
        return 1;
    }

    // Connect to server.
    iResult = connect( ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen);
    if (iResult == SOCKET_ERROR) {
        closesocket(ConnectSocket);
        ConnectSocket = INVALID_SOCKET;
        continue;
    }
    break;
}

freeaddrinfo(result);

if (ConnectSocket == INVALID_SOCKET) {
    printf("Unable to connect to server!\n");
    WSACleanup();
    return 1;
}

while(TRUE) {
    cout << "Lotfan paiam khod ra vared konid: ";
    cin.getline(sendbuf,1000);
    send( ConnectSocket, sendbuf, (int)strlen(sendbuf), 0 );
    memset(sendbuf,'\0',sizeof(sendbuf));
    recv(ConnectSocket, recvbuf, recvbuflen, 0);
    cout << "paiam dariaft:" << recvbuf <<endl;
    memset(recvbuf,'\0',sizeof(recvbuf));
}

return 0;
}
