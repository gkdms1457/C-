//윤성우 열혈 c++ 프로그래밍
//problem01-1

#include <iostream>

int main() {

    int num;
    std::cout << "숫자입력: ";
    std::cin >> num;

    for(int i = 1; i<10 ; i++) {
        std::cout << num << " * " << i << " = " << num*i << std::endl;
    }

    return 0;
}