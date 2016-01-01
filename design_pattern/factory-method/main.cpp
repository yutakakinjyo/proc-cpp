#include <iostream>
#include "factory.h"
#include "concrete_factory.h"

int main(void) {
  Factory *factory = new ConcreteFactory();
  std::cout << factory->create_product()->name() << std::endl;
  return 0;
}
