#include <iostream>
#include "product.h"
#include "product_adapter.h"

int main(void) {
  Product product(10);
  product.getCost();
  ProductAdapter product_adapter(30);
  product_adapter.getPrice();
  return 0;
}
