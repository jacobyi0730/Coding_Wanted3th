#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    cout << "Hello World!" << endl; 
    

    
    // C++이란?
    // 1. 자료형(DataType)과 변수

    // 정수형(Integer, int) -1, 0, 1, 2
    // 실수형(float, double) -3.14f, 0.0f, 2.5f
    // 논리형(Boolean, bool) true, false
    // 문자형(char) 'a'
    // 문자열

    int n = 4; // 초기화

    int n2;    // 변수 선언
    n2 = n;    // 값을 대입
    // 포인터 변수 : 주소값을 담는 변수
    int* pN = &n; // 변수 n의 주소를 pN에 담고싶다.
    int** ppN = &pN;

    // 배열 : 연속된 공간
    int aN[4]{0};
    for (int i = 0; i < 4 ;i =  i + 1 )
    {
        aN[i] = (i + 1) * 10;
    }
    
    // 반복문
    for (int i = 0; i < 4 ;i =  i + 1 )
    {
        cout << aN[i] << endl;
    }
    


    
    
    

    // 실수형 변수 pi에 3.14f를 초기화 해보세요.
    float pi = 3.14f;

    // 논리형 변수 isGood을 선언하고 true를 대입하세요.
    bool isGood;
    isGood = true;


    
    // 변수 : 수 : 자료
    // 상수 :



    
    // 2. 조건문
    // 3. 반복문
    // 4. 함수
    // 5. 클래스
    // 6. 객체지향프로그래밍
    

    
    return 0;
}
