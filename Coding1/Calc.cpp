#include "Calc.h"

// 함수의 정의/구현
// Overloading
//  Call by Pointer
int Add(int* a, int* b)
{
    *a = 100;
    return *a + *b;
}
// Call by Value
int Add(int a, int b)
{
    return a + b;
}
// Call by Reference
int AddRef(int& a, int& b)
{
    return a + b;
}