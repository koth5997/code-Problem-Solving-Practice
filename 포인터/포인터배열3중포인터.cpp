#include <iostream>
using namespace std;

int main()
{
    const char* ptrArray[2];  
    const char** ptrptr;      

    int i;

    
    ptrArray[0] = "한국";
    ptrArray[1] = "서울";

    
    ptrptr = ptrArray;

    
    cout << "\nptrArray[0]의 주소 (&ptrArray[0]) = " << &ptrArray[0];
    cout << "\nptrArray[0]의 값 (ptrArray[0])    = " << ptrArray[0];
    cout << "\nptrArray[0]의 첫 글자 (*ptrArray[0]) = " << *ptrArray[0];
    cout << "\nptrArray[0]의 전체 문자열         = " << ptrArray[0];

    cout << "\n\nptrArray[1]의 주소 (&ptrArray[1]) = " << &ptrArray[1];
    cout << "\nptrArray[1]의 값 (ptrArray[1])    = " << ptrArray[1];
    cout << "\nptrArray[1]의 첫 글자 (*ptrArray[1]) = " << *ptrArray[1];
    cout << "\nptrArray[1]의 전체 문자열         = " << ptrArray[1];

    
    cout << "\n\nptrptr의 주소 (&ptrptr)          = " << &ptrptr;
    cout << "\nptrptr의 값 (ptrptr)              = " << ptrptr;
    cout << "\nptrptr의 1차 참조값 (*ptrptr)     = " << *ptrptr;
    cout << "\nptrptr의 2차 참조값 (**ptrptr)    = " << **ptrptr;
    cout << "\nptrptr의 문자열 (**ptrptr)        = " << *ptrptr;

    
    cout << "\n\n*ptrArray[0] 문자별 출력: ";
    for (i = 0; i < 10; i++)
    {
        cout << *(ptrArray[0] + i);  
    }

    cout << "\n*ptrptr 문자별 출력: ";
    for (i = 0; i < 10; i++)
    {
        cout << *(*ptrptr + i);
    }

    cout << "\n*ptrArray[1] 문자별 출력: ";
    for (i = 0; i < 10; i++)
    {
        cout << *(ptrArray[1] + i);
    }

    cout << "\n**(ptrptr + 1) 문자별 출력: ";
    for (i = 0; i < 10; i++)
    {
        cout << *(*(ptrptr + 1) + i);
    }

    return 0;
}
