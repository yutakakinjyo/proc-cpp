#include <iostream>
#include "Loop.h"

int add(int a, int b) {
  return a + b;
}

int main(void) {
  std::cout << loop(add) << std::endl;
  return 0;
}
