#include <stdio.h>

int main(int argc, char *argv[], char *envp[]){
    while (argc--){
        printf("Argument pointer address = %p\n", argv);
        printf("Argument string address = %p\n", *argv);
        argv++;
    }
    printf("Address of envp = %p\n", envp);
    printf("Address of envp[0] = %p\n", *envp);
}
