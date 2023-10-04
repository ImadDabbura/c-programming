#include <stdio.h>
#include <unistd.h>

int main(){
    static int n;
    static char buffer[BUFSIZ];
    static char *bufp; // = buffer;

    if (n == 0)
    {
        n = read(STDIN_FILENO, buffer, BUFSIZ);
        bufp = buffer;
    }
    return (--n >= 0) ? *bufp++ : EOF;
}
