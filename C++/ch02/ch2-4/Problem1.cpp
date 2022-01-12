#include <iostream>
using namespace std;

void increaseOne(int &n1) {
    ++n1;
    cout << n1 << endl;
}

void invertSign(int &n1) {
    n1 *= (-1);
    cout << n1 << endl;
}

int main(void) {
    int num = 10;

    increaseOne(num);
    invertSign(num);
    
    return 0;
}