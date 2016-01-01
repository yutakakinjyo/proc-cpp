#include "factory.h"

std::string Factory::name() {
  Product *product = this->create_product();
  return product->name();
}

Product* Factory::create_product() {
  return new Product();
}

