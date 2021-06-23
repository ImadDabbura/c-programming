#include <stdio.h>

struct key {
    char *word;
    int count;
} keywords[] = {
    "imad", 4,
    "deema", 5
};

int main()
{
    printf("first word of keywords %s\n", keywords[0].word);
    printf("second count is %d\n", keywords[1].count);
}