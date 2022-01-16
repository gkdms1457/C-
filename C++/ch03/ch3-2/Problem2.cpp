#include <iostream>
#include <cstring>
using namespace std;

class Printer {
private:
    char str[30];

public:
    void SetString(char *pstr);
    void ShowString();
};

void Printer::SetString(char *pstr) {
    strcpy(str, pstr);
}

void Printer::ShowString() {
    cout << str << endl;
}

int main(void) {

    Printer pnt;

    pnt.SetString("Hello world!");
    pnt.ShowString();

    pnt.SetString("haha");
    pnt.ShowString();

    return 0;
}