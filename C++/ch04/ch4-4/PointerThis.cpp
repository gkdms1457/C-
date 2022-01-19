#include <iostream>
#include <cstring>
using namespace std;

class SoSimple {
    int num;

public:
    SoSimple(int n) :num(n) {
        cout << "num = " << num << ", ";
        cout << "addr = " << this << endl;
    }
    void showSimpleData() {
        cout << num << endl;
    }
    SoSimple* getThisPointer() {
        return this; // 이 문장을 실행하는 객체의 포인터 반환
    }
};

int main(void) {
    SoSimple sim1(100);
    SoSimple *ptr1 = sim1.getThisPointer();

    cout << ptr1 << ", ";
    ptr1 -> showSimpleData();

    SoSimple sim2(200);
    SoSimple *ptr2 = sim2.getThisPointer();

    cout << ptr2 << ", ";
    ptr2 -> showSimpleData();

    return 0;
}