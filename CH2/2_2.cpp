//참조자(레퍼런스 - reference)
#include <iostream>

int main()
{
    int a = 3;
    int& another_a = a;

    std::cout << "a : " << a << std::endl;
    std::cout << "another_a : " << another_a << std::endl;

    another_a = 5;
    std::cout << "a : " << a << std::endl;

    //포인터와 비슷하나 선언만 하는 것은 불가능 하다
    //int* p; 가능
    //int& another_a; 불가능

    //한 번 참조가 되면 다른 변수는 참조가 불가능 하다
    int b = 8;
    another_a = b; // a = b;와 같은 뜻
    std::cout << "a : " << a << std::endl;
    return 0;

}