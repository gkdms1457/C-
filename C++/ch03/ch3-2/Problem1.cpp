#include <iostream>
using namespace std;

class Calculator {
private:
    int count[4];
    string cal[4];

public:
    void init();
    double Add(double num1, double num2);
    double Div(double num1, double num2);
    double Min(double num1, double num2);
    double Mul(double num1, double num2);
    void ShowOpCount();
};

void Calculator::init() {
    fill(count, count+4, 0);
    cal[0] = "add";
    cal[1] = "div";
    cal[2] = "min";
    cal[3] = "mul";
}

void Calculator::ShowOpCount() {
    for (int i = 0; i < 4; i++) {
        cout << cal[i] << " : " << count[i] << endl;
    }
}

double Calculator::Add(double num1, double num2) {
    count[0]++;
    return num1 + num2;
}

double Calculator::Div(double num1, double num2) {
    count[1]++;
    return num1 / num2;
}

double Calculator::Mul(double num1, double num2) {
    count[2]++;
    return num1 * num2;
}

double Calculator::Min(double num1, double num2) {
    count[3]++;
    return num1 - num2;
}

int main(void) {
    Calculator cal;
    cal.init();

    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 / 1.7 = " << cal.Div(3.5,1.7) << endl;
    cout << "2.2 - 1.5 = " << cal.Min(2.2,1.5) << endl;
    cout << "3.2 * 2.4 = " << cal.Mul(3.2, 2.4) << endl;
    cout << "3.2 * 2.4 = " << cal.Mul(3.2, 2.4) << endl;
    cal.ShowOpCount();

    return 0;
}