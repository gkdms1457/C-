#include <iostream>
using namespace std;

class SoSimple {
    int num1;
    int num2;

public:
    SoSimple(int n1, int n2) :num1(n1), num2(n2) {}

    SoSimple(SoSimple &copy) :num1(copy.num1), num2(copy.num2) {
        cout << "called SoSimple(SoSimple &copy)" << endl;
    }
    void showSimpleDate() {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

int main(void) {
    SoSimple sim1(15, 30);

    cout << "before construct" << endl;
    SoSimple sim2 = sim1;
    cout << "after construct" << endl;
    sim2.showSimpleDate();

    return 0;
}