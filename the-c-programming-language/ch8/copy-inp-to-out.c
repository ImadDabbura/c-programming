#include <stdio.h>
#include <unistd.h>

int main(){
    char buffer[BUFSIZ];
    int n;
    while ((n = read(STDIN_FILENO, buffer, BUFSIZ)))
        write(STDOUT_FILENO, buffer, n);
    return 0;
}
