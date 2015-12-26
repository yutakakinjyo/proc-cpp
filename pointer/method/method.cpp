#include <iostream>
#include "Loop.h"

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int main(void) {
  std::cout << loop(add) << std::endl;
  std::cout << loop(sub) << std::endl;
  std::cout << regex_loop("hoge") << std::endl;
  return 0;
}
