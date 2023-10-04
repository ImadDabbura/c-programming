#include <stdio.h>
#include <unistd.h>

int main(){
    char c;
    return (read(STDIN_FILENO, &c, 1) ? c: EOF);
}