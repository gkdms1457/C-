// 길이 정보를 인자로 받아 해당 길이의 문자열 저장이 가능한 배열 생성 -> 배열 주소값 반환

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len){
    char *str = (char*) malloc(sizeof(char)*len);
    //char *str = new char[10];
    return str;
}

int main(void){

    char *str = MakeStrAdr(20);

    strcpy(str, "I am so happy~");
    cout << str << endl;
    free(str);
    //delete []str;

    return 0;
}