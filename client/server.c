// #include <stdio.h>
// #include <stdlib.h>
// #include <winsock.h>
// #include <string.h>
// #include <unistd.h>

// int main() {
//     int sockHandle;
//     // Currently seems like another method may be necessary since this relies on working on a different layer of the OSI model
//     if (sockHandle = socket(AF_INET, SOCK_DGRAM, 0) < 0) // Might be able to change number based on protocol being used (aka batman)
//     {
//         printf("socket failed");
//         return -1;
//     }

//     // if (setsockopt(sockHandle, SOL_SOCKET, SO_REUSEADDR))
// }