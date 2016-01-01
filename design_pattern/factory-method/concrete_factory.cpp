#include "concrete_factory.h"

Product* ConcreteFactory::product() {
  return new ConcreteProduct();
}
