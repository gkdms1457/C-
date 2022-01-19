#include <iostream>
using namespace std;

class SelfRef {
    int num;

public:
    SelfRef(int n) : num(n) {
        cout << "obj construt" << endl;
    }
    SelfRef& adder(int n){
        num += n;
        return *this;
    }
    SelfRef& showTwoNumber() {
        cout << num << endl;
        return *this;
    }
};

int main(void) {
    SelfRef obj(3);
    SelfRef &ref = obj.adder(2);

    obj.showTwoNumber();
    ref.showTwoNumber();

    ref.adder(1).showTwoNumber().adder(2).showTwoNumber();
    // ref.adder = 참조값 반환 -> (ref.adder(2)).showTwoNumber()
    return 0;
}