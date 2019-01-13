#include <stdio.h>

/* convert tabs and new lines into visible characters */
void escape(char s[], char t[]){
    int i, j;

    for (i = j = 0; t[i] != '\0'; i++){
        switch (t[i]){
            case '\t':          /* tab */
                s[j++] = '\\';
                s[j++] = 't';
                break;
            case '\n':          /* new line */
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            default:
                s[j++] = t[i];
                break;
        }
    }
    s[j] = '\0';
}
