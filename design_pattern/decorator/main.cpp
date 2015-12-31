#include <iostream>
#include "concrete_compornent.h"
#include "decorator.h"

int main(void) {
  Compornent *comp = new Decorator(new ConcreteCompornent());
  std::cout << comp->name() << std::endl;
  return 0;
}
