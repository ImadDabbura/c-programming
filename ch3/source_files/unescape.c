#include <stdio.h>

/* convert escape sequences into real characters */
void unescape(char s[], char t[]){
    int i, j;

    for (i = j = 0; t[i] != '\0'; i++){
        switch (t[i]){
            case '\\':
                switch(t[++i]){
                    case 't':          /* tab */
                        s[j++] = '\t';
                        break;
                    case '\n':          /* new line */
                        s[j++] = '\n';
                        break;
                    default:            /* all other characters */
                        s[j++] = '\\';
                        s[j++] = t[++i];
                }
                break;
            default:
                s[j++] = t[i];
                break;
        }
    }
    s[j] = '\0';
}
