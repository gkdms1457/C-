// object-like macro

#include <stdio.h>

#define NAME "3omh4"
#define AGE 25
#define PRINT_ADDR puts("addr : incheon\n")

int main() {

    printf("name : %s \n", NAME);
    printf("age : %d \n", AGE);
    PRINT_ADDR;
    return 0;

}