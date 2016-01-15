#include "singleton.h"

Singleton::Singleton() {
  this->i = 0;
}

Singleton& Singleton::getInstance() {
  static Singleton singleton;
  return singleton;
}
