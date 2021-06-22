/* copy t to s */
void strcpy(char *s, char *t){
    int i;

    for (i = 0; (s[i] = t[i]) != '\0'; i++)
        ;
}