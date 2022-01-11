//윤성우 열혈 c++ 프로그래밍
//problem01-2
#include <iostream>

void swap(int *n1, int *n2) {

    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;

}

void swap(char *c1, char *c2) {

    char tmp = *c1;
    *c1 = *c2;
    *c2 = tmp;


}

void swap(double *n1, double *n2) {

    double tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;


}


int main() {

    int num1 = 20, num2 = 30;
    char ch1 = 'A', ch2 = 'Z';
    double db1 = 1.111, db2 = 5.555;

    swap(&num1, &num2);
    swap(&ch1, &ch2);
    swap(&db1, &db2);

    std::cout << num1 << " " << num2 << std::endl;
    std::cout << ch1 << " " << ch2 << std::endl;
    std::cout << db1 << " " << db2 << std::endl;

    return 0;

}