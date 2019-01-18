#include <stdio.h>

/* declaring union */
union union_example{
    int integer;
    float decimal;
    char name[12];
};

int main(){
    union union_example u = {10, 0.1, "imad dabbura"};
    
    // we can only initialize the first member, so lets check that
    printf("union data:\ninteger = %d\ndecimal = %f\nname = %s",
            u.integer, u.decimal, u.name);
    
    // size of union is the size of its biggest element
    printf("\nsize of union data = %lu bytes\n", sizeof(u));

    // can access one member at a time
    u.integer = 10;
    u.decimal = 12.3;
    printf("\nAccessing all members at the same time:\n");
    printf("union data:\ninteger = %d\ndecimal = %f\nname = %s\n",
            u.integer, u.decimal, u.name);
    
    // changing one element affects the rest
}