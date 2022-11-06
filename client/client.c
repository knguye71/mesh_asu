#include <stdio.h>
#include <stdlib.h>
#include <winsock.h>

int main() {
    char host[21];
    int port;
    char targetHost[21];
    int targetPort;
    int hostname;
    printf("Starting Client\n");
    hostname = gethostname(host, sizeof(host)); // Why isn't this working!!!
    if (hostname = -1) {
        printf("Could not retrieve hostname");
        return -1;
    }
    // printf("%d", hostname); 
    // Get the current host this is running on. This will be useful for sending to other clients.
    printf("localhost's ip is: %s\n", host);

    // input the port this should run on
    int portIsValid = 1;
    do {
        printf("\nPlease input port to run on: ");
        scanf("%d", &port);
        if (port > 9999 || port < 0) {
            printf("Port is invalid");
            portIsValid = 0;
        } else {
            portIsValid = 1;
        }
    } while (!portIsValid);
    printf("The given port is: %d\n", port);

    // Get the host and port that should be connected to

    // input the port this should run on
    int targetPortIsValid = 1;
    do {
        printf("\nPlease input port to connect to: ");
        scanf("%d", &targetPort);
        if (targetPort > 9999 || targetPort < 0) {
            printf("Port is invalid");
            targetPortIsValid = 0;
        } else {
            targetPortIsValid = 1;
        }
    } while (!targetPortIsValid);
    printf("The given port is: %d\n", targetPort);

    int targetHostIsValid = 0;
    do {
        printf("Please input host to connect to: ");
        scanf("%s", targetHost);
        printf("\nThe given host is (20 character max): %s\n", targetHost);
        targetHostIsValid = 0;
        for (int i = (sizeof(targetHost)/sizeof(char)) - 1; i >= 0; i--) {
            if (host[i] == '\0') targetHostIsValid = 1;
        }
    } while (!targetHostIsValid);
    printf("The given host is: %s\n", targetHost);
}