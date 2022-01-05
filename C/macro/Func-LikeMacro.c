#include <stdio.h>

#define SQUARE(x) ((x)*(x))

int main() {

    int num = 20;
    printf("Square of num : %d \n", SQUARE(num));
    printf("Square of 3+2 : %d \n", SQUARE(3+2));
    printf("Square of 3.1 : %d \n", SQUARE(3.1));
    return 0;
    
}