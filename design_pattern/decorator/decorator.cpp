#include "decorator.h"

Decorator::Decorator(Compornent *comp) {
  this->comp = comp;
}

std::string Decorator::name() {
  return comp->name() + " World";
}
