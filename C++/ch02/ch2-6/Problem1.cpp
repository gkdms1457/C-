#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char *str1 = "ABC 123 ";
    char *str2 = "DEF 456 ";
    char str3[50];

    cout << strlen(str1) << endl;
    cout << strlen(str2) << endl;
    strcpy(str3, str1);
    strcpy(str3, str2);
    cout << str3 << endl;

    if(strcmp(str1, str2) == 0) 
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
    return 0;
}