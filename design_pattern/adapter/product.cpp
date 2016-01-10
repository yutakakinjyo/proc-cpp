#include "product.h"

Product::Product(int cost) {
  this->cost = cost;
}

void Product::getCost() {
  std::cout << this->cost << std::endl;
}
