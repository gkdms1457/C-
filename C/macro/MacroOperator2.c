#include <stdio.h>
#define STNUM(Y, S, P) Y ## S ## P // == #Y #S #P

int main() {

    printf("student number : %d", STNUM(10, 11, 12));
    return 0;

}