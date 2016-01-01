#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>
#include "product.h"

class Factory {
 public:
  std::string name();
 protected:
  virtual Product* product();
};

#endif
