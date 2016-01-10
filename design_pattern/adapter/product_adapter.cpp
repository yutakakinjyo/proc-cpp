#include "product_adapter.h"

ProductAdapter::ProductAdapter(int cost) {
  this->product = new Product(cost);
}

void ProductAdapter::getPrice() {
  this->product->getCost();
}
