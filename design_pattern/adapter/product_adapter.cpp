#include "product_adapter.h"

ProductAdapter::ProductAdapter(Product *product) {
  this->product = product;
}

void ProductAdapter::getPrice() {
  this->product->getCost();
}
