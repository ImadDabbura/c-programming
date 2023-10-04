#include <stdio.h>

int main(){
    char *s = "Same string literal";
    char *s1 = "Same string literal";
    printf("Pointers of the same string literals are %s\n", (s == s1 ? "equal": "not equal"));
    return 0;
}