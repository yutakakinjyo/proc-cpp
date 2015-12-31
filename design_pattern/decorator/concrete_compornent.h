#include <iostream>
#include "compornent.h"

class ConcreteCompornent : public Compornent {
 public:
  virtual std::string name();
};
