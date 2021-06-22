#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 100         /* max number of characters to read per line */

int main(int argc, char const *argv[])
{
    FILE *fp1, *fp2;
    void filecomp(FILE *, FILE *);

    if (argc != 3) {
        fprintf(stderr, "%s: need two file names\n", *argv);
        exit(1);
    }
    else {
        if ((fp1 = fopen(argv[1], "r")) == NULL) {
            fprintf(stderr, "%s: can't open file %s", argv[0], argv[1]);
            exit(1);
        }
        if ((fp2 = fopen(argv[2], "r")) == NULL) {
            fprintf(stderr, "%s: can't open file %s", argv[0], argv[2]);
            exit(1);        
        }
        else {
            filecomp(fp1, fp2);
            fclose(fp1);
            fclose(fp2);
            exit(0);
        }
    }
}

/* compare two files, a line at a time */
void filecomp(FILE *fp1, FILE *fp2)
{
    char line1[MAXLINE], line2[MAXLINE];
    char *lp1, *lp2;

    do {
        // read lines
        lp1 = fgets(line1, MAXLINE, fp1);
        lp2 = fgets(line2, MAXLINE, fp2);
        
        // both lines were read successfully
        if (lp1 == line1 && lp2 == line2) {
            if(strcmp(line1, line2) != 0) {
                printf("first difference in line \n%s", line1);
                lp1 = lp2 = NULL;
            }
        }
        // encountered error or end of file
        else if (lp1 != line1 && lp2 == line2)
            printf("end of first file at line \n%s\n", line2);
        else if (lp1 == line1 && lp2 != line2)
            printf("end of second file at line \n%s\n", line1);
    }
    while (lp1 == line1 && lp2 == line2);
}
