// ate 와 app
#include <fstream>
#include <iostream>
#include <string>

int main() {
  // 두 파일에는 모두 abc 라고 써 있었습니다.
  std::ofstream out("test2.txt", std::ios::app);
  std::ofstream out2("test3.txt", std::ios::ate);

  out.seekp(3, std::ios::beg);
  out2.seekp(3, std::ios::beg);

  out << "추가";
  out2 << "추가";

  return 0;
}