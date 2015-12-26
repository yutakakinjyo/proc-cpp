#include <iostream>
#include "Loop.h"

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

std::string regex(std::string match) {
  return "hoge";
}

int main(void) {
  std::cout << loop(add) << std::endl;
  std::cout << loop(sub) << std::endl;
  std::cout << regex_loop("hoge", regex) << std::endl;
  return 0;
}
