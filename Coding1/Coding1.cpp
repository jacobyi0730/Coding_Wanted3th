#include <iostream>
#include "Calc.h"
using namespace std;









//c->c++
// 구조체(struct)
// 클래스(class)

struct MyStruct
{
    int n;
    void Test(){}
};

class MyClass
{
public:
    int n; // 속성 : 맴버 변수, 필드
    void Test(){}   // 기능 : 맴버 함수, Method
};


int main555()
{


    
    MyStruct a;
    a.n = 10;
    a.Test();
    
    MyClass b;
    b.n = 100;
    b.Test();
}






// 함수의 선언
// 함수의 정의/구현
// 함수의 호출

//int k = 100;    // 전역변수
int DivPer(int a, int b)
{
    static int k = 100; // 정적변수
    return (a + b) / k;
}

int main33(int argc, char* argv[])
{
    // 변수
    // 2가지
    // 정적 할당
    int m = 0;
    // 동적 할당
    int* pM = new int[2];

    delete[] pM;


    
    // 1부터 10까지 중에 짝수만 출력하는 코드를 작성하세요.
    // for문을 이용해야합니다.
    // %

    int a = 1;

    int b = a & 1;
    
    for (int i=1 ; i<=10 ; i++)
    {
        // i가 5이하이다. 그리고 i가 짝수라면 
        if (i <= 5 && i % 2 == 0)
        {
            cout << i << endl;
        }
    }


    
    // 조건문
    int n = 10;
    // 만약 n의 값이 10보다 작다면 행복해
    // 그렇지 않고 n의 값이 10보다 작다면 가자!
    if (n < 10)
    {
        cout << "행복해" << endl;
    }
    else if (n < 20)
    {
        cout << "가자!" << endl;
    }
    // 그렇지 않다면 좋아
    else
    {
        cout << "좋아!" << endl;
    }


    

    
    // int* k = nullptr;
    // // 함수의 호출
    // int i = 100000;
    // int j = 200000;
    // int result = DivPer(i, j);
    // cout  << result << "%";
}








int main21(int argc, char* argv[])
{
    // 함수의 호출
    Add(10, 20);
    
    // 포인터변수 : 다른 변수의 주소값을 담는 변수
    // int n = 10;
    // int* pN = &n;
    // *pN = 100;
    // cout << *pN << endl;

    // 변수 : 값타입, 포인트타입, 참조타입
    // int n = 10;
    // int k = 100;
    // int& rN = n;
    // rN = k;
    // cout << "rN : " << rN << endl << "n : " << n << endl << "k : " << k;

    
    // cout << "Hello World!" << endl; 
    //
    //
    // // C++이란?
    // // 1. 자료형(DataType)과 변수
    //
    // // 정수형(Integer, int) -1, 0, 1, 2
    // // 실수형(float, double) -3.14f, 0.0f, 2.5f
    // // 논리형(Boolean, bool) true, false
    // // 문자형(char) 'a'
    // // 문자열
    //
    // int n = 4; // 초기화
    //
    // cout << sizeof(long long) << endl;
    //
    // int n2;    // 변수 선언
    // n2 = n;    // 값을 대입
    // // 포인터 변수 : 주소값을 담는 변수
    // int* pN = &n; // 변수 n의 주소를 pN에 담고싶다.
    // int** ppN = &pN;
    //
    // // 배열 : 연속된 공간
    // int aN[4]{0};
    // for (int i = 0; i < 4 ;i =  i + 1 )
    // {
    //     aN[i] = (i + 1) * 10;
    // }
    //
    // // 반복문
    // for (int i = 0; i < 4 ;i =  i + 1 )
    // {
    //     cout << aN[i] << endl;
    // }
    //
    //
    //
    //
    //
    //
    //
    // // 실수형 변수 pi에 3.14f를 초기화 해보세요.
    // float pi = 3.14f;
    //
    // // 논리형 변수 isGood을 선언하고 true를 대입하세요.
    // bool isGood;
    // isGood = true;


    
    // 변수 : 수 : 자료
    // 상수 :



    
    // 2. 조건문
    // 3. 반복문
    // 4. 함수
    // 5. 클래스
    // 6. 객체지향프로그래밍
    

    
    return 0;
}
