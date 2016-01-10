#ifndef PRODUCT_ADAPTER_H
#define PRODUCT_ADAPTR_H

#include <iostream>
#include "product.h"
#include "product_price.h"

class ProductAdapter : public ProductPrice {
 public:
  ProductAdapter(int cost);
  void getPrice();
  
  Product *product;
};

#endif
