#include <stdio.h>

int main(int argc, char *argv[], char *envp[]){
    char s[] = "1234";
    int i = 0;
    int n = 0;

    while (s[i] != '\0'){
        n = 10 * n + s[i] - '0';
        i++;
    }
    printf("Here is the number: %d\n", n);
    return 0;
}
