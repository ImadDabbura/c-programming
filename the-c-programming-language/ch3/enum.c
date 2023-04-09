#include <stdio.h>

int main(){
    /* enum week {Mon, Tue, Wed, Thurs, Fri, Sat, Sun}; */
    /* printf("Mon is: %d\n", Mon); */
    /* printf("Thurs is: %d\n", Thurs); */

    enum week {Mon=10, Tue, Wed=10, Thurs, Fri, Sat, Sun};
    printf("Mon is: %d\n", Mon);
    printf("Wed is: %d\n", Wed);
    printf("Thurs is: %d\n", Thurs);
}
