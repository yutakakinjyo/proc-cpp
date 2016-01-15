#include <iostream>
#include "singleton.h"

int main(void) {

  // refarence. it can receive refarence or value type.
  Singleton &singleton = Singleton::getInstance();
  std::cout << singleton.i << std::endl;
  singleton.i = 1;

  Singleton singleton2 = Singleton::getInstance();
  std::cout << singleton2.i << std::endl;
}
