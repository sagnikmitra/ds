#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
int main(int argc, char *argv[])
{
    pid_t pid;
    int mypipefd[2];
    int ret;
    char buffer[20];
    ret = pipe(mypipefd);
    if (ret == -1)
    {
        perror("pipe");
        exit(1);
    }
    pid = fork();
    if (pid == 0)
    {
        printf("CHILD PROCESS");
        write(mypipefd[1], "hello, there!", 12);
    }
    else
    {
        printf("PARENT PROCESS");
        read(mypipefd[0], buffer, 15);
        printf("buffer:%s\n", buffer);
    }
    return 0;
}