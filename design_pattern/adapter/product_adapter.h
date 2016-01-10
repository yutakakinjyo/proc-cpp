#ifndef PRODUCT_ADAPTER_H
#define PRODUCT_ADAPTER_H

#include <iostream>
#include "product.h"
#include "product_price.h"

class ProductAdapter : public ProductPrice {
 public:
  ProductAdapter(Product *product);
  void getPrice();
  
  Product *product;
};

#endif
