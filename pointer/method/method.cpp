#include <iostream>

int add(int a, int b) {
  return a + b;
}

int loop(int (*add)(int,int)) {
  return add(1,2);
}

int main(void) {
  std::cout << loop(add) << std::endl;
  return 0;
}
