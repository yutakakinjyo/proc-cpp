#include "decorator.h"

Decorator::Decorator(Compornent *comp) {
  this->comp = comp;
}

void Decorator::name() {
  this->comp->name();
  std::cout <<  + " World" << std::endl;
}
