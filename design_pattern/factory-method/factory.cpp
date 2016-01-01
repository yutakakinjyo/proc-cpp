#include "factory.h"

std::string Factory::name() {
  Product *product = this->product();
  return product->name();
}

Product* Factory::product() {
  return new Product();
}

