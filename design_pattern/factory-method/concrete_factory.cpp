#include "concrete_factory.h"

Product* ConcreteFactory::create_product() {
  return new ConcreteProduct();
}
