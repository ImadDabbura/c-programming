#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#ifdef TEST
#define A 100
#endif
int main(void){
    char name[] = "imad dabbura";
    FILE *fp = fopen("test.txt", "w+");
    size_t n = fwrite(name, 1, sizeof(name), fp);
    fclose(fp);
    /* printf("Number of chars written = %d\n", (int)n); */
    printf("NULL == \"\\0\" %d\n", NULL == '\0');
    printf("10 and ~10: %d, %d\n", 10, ~10);
    enum day {Mon, Tue};
    enum day d = Mon;
    printf("Monday = %d\n", d);
    return 0;
}
