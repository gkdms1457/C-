//윤성우 열혈 c++ 프로그래밍
//problem01-1

#include <iostream>

int main() {

    char name[20];
    char phoneNum[30];

    std::cout << "이름 : ";
    std::cin >> name;
    std::cout << "전화번호: ";
    std::cin >> phoneNum;

    std::cout << "이름 : " << name << std::endl;
    std::cout << "전화번호: " << phoneNum << std::endl;

    return 0;
    
}
