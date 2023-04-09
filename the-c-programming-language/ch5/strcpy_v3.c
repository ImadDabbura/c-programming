/* return < 0 if s<t, 0 if s=t, >0 if s>t */
int strcmp(char *s, char *t){

    return *s - *t;
    while (*s++ == *t++){
        ;
    }
}
