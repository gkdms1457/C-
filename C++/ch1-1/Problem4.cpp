//À±¼º¿ì ¿­Ç÷ c++ ÇÁ·Î±×·¡¹Ö
//problem01-1
#include <iostream>

int main() {

    int sale, salary;

    std::cout << "please input sale amount in 10000 won(-1 to end) : ";
    std::cin >> sale;

    while (sale != -1) {

        std::cout << "this month total salary : " << 50 + (sale * 0.12) << std::endl;
        std::cout << "please input sale amount in 10000 won(-1 to end) : ";
        std::cin >> sale; 
    }

    return 0;
}

/*refactoring
int CalSalary(int sale) {

    retunr (int)(50 + sale * 0.12);

}

int main() {

    int sale;

    while (1) {

        std::cout << "please input sale amount in 10000 won(-1 to end) : ";
        std::cin >> sale;

        if( sale == -1 )
            break;

        std::cout << "this month total salary : " << CalSalary(sale) << std::endl;
        
    }

    return 0;
}

*/