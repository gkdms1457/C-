#include <iostream>
using namespace std;

class FruitSeller {
private:
    const int APPLE_PRICE;
    int numOfApple;
    int myMoney;

public:
    FruitSeller(int price, int num, int money) 
        :APPLE_PRICE(price), numOfApple(num), myMoney(money)
    {
        
    }
    void ShowInfo() {
        cout << "apple_price : " << APPLE_PRICE << endl;
        cout << "number of Apple : " << numOfApple << endl;
        cout << "Money : " << myMoney << endl;
    }
};

int main(void) {
    FruitSeller seller(1000, 10, 5000);
    seller.ShowInfo();
}