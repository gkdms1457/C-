#include <iostream>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2) {
    Point *temp = new Point;
    temp->xpos = p1.xpos + p2.xpos;
    temp->ypos = p1.ypos + p2.ypos;
    return *temp;
}

int main(void) {

    Point *ptr1 = new Point;
    Point *ptr2 = new Point;
    
    ptr1->xpos = 1;
    ptr1->ypos = 2;

    ptr2->xpos = 3;
    ptr2->ypos = 4;
    Point &ptr3 = PntAdder(*ptr1, *ptr2);

    cout << "(" << ptr3.xpos << ", " << ptr3.ypos << ")"<<endl;
    return 0;

}
/* 코드 이해
Point& PntAdder(const Point &p1, const Point &p2)
Point &ptr3 = PntAdder(*ptr1, *ptr2);

-> const Point &p1은 변수에 대한 참조자이므로 PntAdder(ptr1, ptr2)로 함수 호출을하면 const Point &p1 = ptr1으로 초기화된다.
-> ptr1이 포인터이므로 오류가 난다. PntAdder(*ptr1, *ptr2)은 const Point &p1 = *ptr1 으로 *ptr1은 ptr1이 가리키는 값을 말한다.
-> 따라서 위와 같이 함수를 호출해야한다.

*/