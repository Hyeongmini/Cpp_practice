#include <iostream>

/*int function() 
{
  int a = 2;
  return a;
}

int main() 
{
  int b = function();
  std::cout << "b : " << b << std::endl;
  return 0;
}*/ //2가 출력됨


//지역변수의 레퍼런스를 리턴
/*int& function() 
{
  int a = 2;
  return a;
}

int main() 
{
  int b = function();
  b = 3;
  return 0;
}*/ //a를 참조한 참조자가 리턴되었지만 함수가 끝나면서 a가 사라지면서 오류가 생김
//int& ref = a;
//int b = ref;


//외부변수의 레퍼런스를 리턴
/*int& function(int& a) {
  a = 5;
  return a;
}

int main() {
  int b = 2;
  int c = function(b);
  std::cout << "c : " << c << std::endl;
  return 0;
} */ // 5출력

//참조자가 아닌 값을 리턴하는 함수를 참조자로 받기
// int function() {
//   int a = 5;
//   return a;
// }

// int main() {
//   int& c = function();
//   return 0;
// } 함수는 끝나면 사라지기 때문에 참조 불가능하다.

//중요한 예외
int function() {
  int a = 5;
  return a;
}

int main() {
  const int& c = function();
  std::cout << "c : " << c << std::endl;
  return 0;
} //const로 리턴값을 받으면 해당 리턴값의 생명이 연장된다