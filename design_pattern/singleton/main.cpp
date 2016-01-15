#include <iostream>
#include "singleton.h"

int main(void) {

  // refarence. it can receive reference or value type.

  // receive referecne type.
  Singleton& singleton = Singleton::getInstance();
  std::cout << singleton.i << std::endl;
  singleton.i = 1;

  // receive value type.
  Singleton singleton2 = Singleton::getInstance();
  std::cout << singleton2.i << std::endl;
}
