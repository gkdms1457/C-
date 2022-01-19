//const변수와 참조자는 선언과 동시에 초기화가 필요하다 -> 이니셜라이저를 통해 const변수와 참조자도 멤버변수로 선언될 수 있다.
#include <iostream>
using namespace std;

class AAA {
public:
    AAA() {
        cout << "empty object" << endl;
    }

    void ShowYourName() {
        cout << "I'm class AAA" << endl;
    }
};

class BBB {
    AAA &ref;
    const int &num;

public:
    BBB(AAA &r, const int &n)
        :ref(r), num(n) 
    {
    }
    void ShowYourName() {
        ref.ShowYourName();
        cout << "and" << endl;
        cout << "I ref num " << num << endl;
    }
};

int main(void) {
    AAA obj1;
    BBB obj2(obj1, 20);

    obj2.ShowYourName();

    return 0;
}
