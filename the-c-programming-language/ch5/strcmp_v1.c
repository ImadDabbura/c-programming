/* return < 0 if s<t, 0 if s=t, >0 if s>t */
int strcmp(char *s, char *t){
    int i = 0;

    for (i = 0; s[i] == t[i]; i++){
        if (s[i] == '\0')
            return 0;
    }
    /* while (*s++ == *t++){ */
    /*     if (*(s - 1) == '\0') */
    /*         return 0; */
    /* } */
    /* return *(s - 1) - *(t - 1); */
    return s[i] - t[i];
}
