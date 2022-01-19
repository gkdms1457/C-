#include <iostream>
#include <cstring>
using namespace std;

namespace COM_POS {
    enum {CLERK, SENIOR, ASSIST, MANAGER};

    void showPOSInfo(int pos) {
        switch (pos)
        {
        case CLERK:
            cout << "position : clerk" << endl; break;
        case SENIOR:
            cout << "position : SENIOR" << endl; break;
        case ASSIST:
            cout << "position : assist" << endl; break;
        case MANAGER:
            cout << "position : manager" << endl; break;
        }
    }
}

class NameCard {
    char *name;
    char *com_name;
    char *phoneNum;
    int postion;

public:
    NameCard(char *n, char *com_n, char *phone, int pos) 
        :postion(pos) 
    {
        name = new char[strlen(n)+1];
        com_name = new char[strlen(com_n)+1];
        phoneNum = new char[strlen(phone)+1];
        strcpy(name, n);
        strcpy(com_name, com_n);
        strcpy(phoneNum, phone);
    }
    void ShowNameCardInfo() {
        cout << "name : " << name << endl;
        cout << "company : " << com_name << endl;
        cout << "phone Number : " << phoneNum << endl;
        COM_POS::showPOSInfo(postion);
    }
    ~NameCard() {
        delete []name;
        delete []com_name;
        delete []phoneNum;
    }   
};

int main(void) {
    NameCard manClerk( "Lee", "ABCEng", "010-1111-2222", COM_POS::CLERK);
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COM_POS::SENIOR);
    NameCard manASSIST("Kim", "SoGoodComp", "010-5555-6666", COM_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manASSIST.ShowNameCardInfo();
    return 0;
}