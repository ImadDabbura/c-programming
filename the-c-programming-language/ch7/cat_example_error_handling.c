#include <stdio.h>
#include <stdlib.h>

/* copy input file to output file */
void filecopy(FILE *ifp, FILE *ofp)
{
    int c;

    while ((c = getc(ifp)) != EOF)
        putc(c, ofp);
}

/* concatenate files */
int main(int argc, char const *argv[])
{
    FILE *fp;
    void filecopy(FILE *, FILE *);
    const char *prog = argv[0];          // name of the program

    if (argc == 1)          // read from stdout
        filecopy(stdin, stdout);
    else {
        while (argc-- > 1){
            if ((fp = fopen(*++argv, "r")) == NULL){
                fprintf(stderr, "%s: can't open %s\n", prog, *argv);
                exit(EXIT_FAILURE);
            }
            else {
                filecopy(fp, stdout);
                fclose(fp);
            }
        }
    }
    if (ferror(stdout)) {           // captures error in stdout
        fprintf(stderr, "%s: error writing output\n", prog);
        exit(2);
        }
    exit(EXIT_SUCCESS);            // equivalent to return 0
}
