// 해결 방안
#include <iostream>
#include <string>

int main() {
  int t;
  while (std::cin >> t) {
    std::cout << "입력 :: " << t << std::endl;
    if (t == 0) break;
  }
}