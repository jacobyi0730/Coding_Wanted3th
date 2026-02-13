#include <stdio.h>
#include <iostream>
using namespace std;

int Add(int a, int b)       {     return a + b;     }
float Add(float a, float b) {     return a + b;     }

// 함수 템플릿
template <typename T1>
T1 Add(T1 a, T1 b)
{
    return a + b;
}
// 함수 템플릿 특수화
template <>
char* Add(char* a, char* b)
{
    int len = strlen(a) + strlen(b) + 1;
    char* str = new char[len];
    strcpy_s(str, len, a);
    strcat_s(str, len, b);
    return str;
}

// 클래스 템플릿
template <typename T>
class Generic
{
private:
    T v;
public:
    Generic(T in_v) : v(in_v)    {            }
    void Print(){ cout << v << endl; }
};
// 클래스 템플릿 특수화
template <>
class Generic<bool>
{
private:
    bool v;
public:
    Generic(bool in_v) : v(in_v)    {            }
    void Print(){ cout << v << endl; }
};

int main(int argc, char* argv[])
{
    Generic<int> g1(100);
    g1.Print();

    Generic<bool> g2(true);
    g2.Print();

    
    char str1[4] = "ab";
    char str2[4] = "ce";
   
    auto result = Add(str1, str2);
    cout << result << endl;
    delete result;
    return 0;
}
