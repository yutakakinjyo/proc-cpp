#ifndef PRODUCT_ADAPTER_H
#define PRODUCT_ADAPTR_H

#include <iostream>
#include "product_price.h"

class ProductPrice{
 public:
  virtual void getPrice() = 0;
};

#endif
