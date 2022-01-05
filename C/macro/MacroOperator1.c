#include <stdio.h>
#define STRING_JOB(A,B) #A "'s job is " #B

int main() {

    printf("%s \n",STRING_JOB(3omh4,h4ck3r));
    return 0;
}