#include <iostream>
using namespace std;

class AAA {
private:
    int num;

public:
    AAA() : num(0) {}
    AAA& CreateInitObj(int n) const { // 힙영역에 생성된 객체를 참조의 형태로 반환 -> 힙에 할당된 메모리 공간은 변수로 간주하여, 참조자를 통한 참조가 가능하다.
        AAA *ptr = new AAA(n);
        return *ptr;
    }
    void ShowNum() const {cout << num << endl;}
private:
    AAA(int n) :num(n) {}
};

int main(void) {
    AAA base;
    base.ShowNum();

    AAA &obj1 = base.CreateInitObj(3);
    obj1.ShowNum();

    AAA &obj2 = base.CreateInitObj(12);
    obj2.ShowNum();

    delete &obj1;
    delete &obj2;
    return 0;
}