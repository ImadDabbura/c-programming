/* return < 0 if s<t, 0 if s=t, >0 if s>t */
int strcmp(char *s, char *t){

    while (*s++ == *t++)
        ;
    return *s - *t;
}
