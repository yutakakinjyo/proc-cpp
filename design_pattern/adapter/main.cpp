#include <iostream>
#include "product.h"
#include "product_adapter.h"

int main(void) {
  Product *product = new Product(10);
  product->getCost();
  ProductAdapter product_adapter(product);
  product_adapter.getPrice();
  return 0;
}
