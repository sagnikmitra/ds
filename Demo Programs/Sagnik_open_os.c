//Written by SAGNIK MITRA, Roll No. 2027, Registration No. 180020278185

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd;
    char buffer[80];
    char message[50] = "HELLO STUDENTS: GOD BLESS ALL";

    fd = open("sagnik_os_sample.txt", O_RDWR);
    printf("fd=%d\n", fd);

    if (fd != -1)
    {
        printf("sagnik_os_sample_file.txt\n");
        write(fd, message, sizeof(message));
        lseek(fd, 0, SEEK_SET);
        read(fd, buffer, sizeof(message));
        printf("\n %s WAS WRITTEN TO THE FILE\n", buffer);
        close(fd);
    }

    return 0;
}

/*THE OUPUT OF MY PROGRAM IS:
fd=-1*/