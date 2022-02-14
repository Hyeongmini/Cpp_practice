// getline 으로 읽어들이기
#include <fstream>
#include <iostream>
#include <string>

int main() {
  // 파일 읽기 준비
  std::ifstream in("textlong.txt");
  char buf[100];

  if (!in.is_open()) {
    std::cout << "파일을 찾을 수 없습니다!" << std::endl;
    return 0;
  }

  while (in) {
    in.getline(buf, 100);
    std::cout << buf << std::endl;
  }

  return 0;
}