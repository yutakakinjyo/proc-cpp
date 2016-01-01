#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"
#include "concrete_product.h"

class ConcreteFactory : public Factory {
 public:
  Product* create_product();
};

#endif
