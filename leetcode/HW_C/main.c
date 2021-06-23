#include <stdio.h>
#include "prog.h"
//int Func(int *x, int n){
//    if (n == 0) {
//        return x[0];
//    }else{
//        return x[0] + Func(x + 1, n - 1);
//    }
//}
// 10

//void Func(int *a, int *b){
//    b[0] = *a + 6;
//}
//6

// 1 1

// 2

// 20 30 20

// 运行时错误

//12

//1c

//0,-1,-1

//5 9

//10 30 20

//20

//int f1(char** a, char b[][5]);
//f2(int a); Wrong
//void f3(int a, char b[]);
//int f4(int);


// 40, sizeof(*p) = 4, sizeof(ch + num) = 4, sizeof(p) = 4;

// 30 24
//i > sizeof(array)
//-1 24
//i > sizeof(array)
//8 24
//i <= sizeof(array)
//7 24
//i <= sizeof(array)

union Number{
    int num1;
    int num2;
};


int main() {
    union Number s;
    s.num1 = 10;
    s.num2 = 200;
    printf("%d", s.num1);
    return 0;
}
