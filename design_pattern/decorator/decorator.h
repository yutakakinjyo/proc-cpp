#include <iostream>
#include "compornent.h"

class Decorator : public Compornent {
 private:
  Compornent *comp;

 public:
  Decorator(Compornent *comp);
  virtual void name();
};
