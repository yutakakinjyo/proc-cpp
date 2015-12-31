#include <iostream>
#include "concrete_compornent.h"

int main(void) {
  Compornent *comp = new ConcreteCompornent();
  comp->name();
  return 0;
}
