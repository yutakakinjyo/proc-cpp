#include <iostream>

void hoge();

void hoge() {
  std::cout << "hoge" << std::endl;
}

int main(void) {
  void (*func)() = hoge;
  func();
  return 0;
}
