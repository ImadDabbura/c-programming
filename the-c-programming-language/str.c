#include <stdio.h>

int main(){
    struct structure {
        int cnt;
        char *s;
    } s_example;
    s_example.cnt = 100;
    s_example.s = "imad";
    struct structure *ptr = &s_example;

    printf("%d\n", --ptr->cnt);
    printf("%d\n", ptr->cnt);
    printf("%c\n", *ptr->s++);
    printf("%c\n", *ptr->s);
    
    char *name = "imad";
    printf("%c\n", *name);
}
