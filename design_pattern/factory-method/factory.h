#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>
#include "product.h"

class Factory {
 public:
  std::string name();
  virtual Product* product();
};

#endif
