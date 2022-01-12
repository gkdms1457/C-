#include <iostream>
using namespace std;

int main(void) {

	int num = 12;
	int *ptr = &num;
	int **dptr = &ptr;

	int &ref = *ptr; //int &ref = num;과 동일
	
	cout << ref << endl;
	
}