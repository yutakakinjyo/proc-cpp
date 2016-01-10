#include <iostream>
#include "product.h"
#include "product_adapter.h"

int main(void) {
  Product *product = new Product(10);
  product->getCost();
  ProductPrice *product_price = new ProductAdapter(product);
  product_price->getPrice();
  return 0;
}
