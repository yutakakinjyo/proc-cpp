#include "Loop.h"

int loop(int (*add)(int, int)) {
  return add(1,2);
}
