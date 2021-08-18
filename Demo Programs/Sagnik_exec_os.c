//Written by SAGNIK MITRA, Roll No. 2027, Registration No. 180020278185

#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("I'm in sagnik_exec_os.c\n");
    printf("P_ID OF sagnik_exec_os.c IS: %d\n", getpid());
    char *args[] = {"Sagnik_hello.exe", NULL};
    execvp(args[0], args);
    printf("RETURNING TO sagnik_exec_os.c");
    return 0;
}

/* OUPUT OF MY PROGRAM:
I'm in sagnik_exec_os.c
P_ID OF sagnik_exec_os.c IS: 1864
RETURNING TO sagnik_exec_os.c */