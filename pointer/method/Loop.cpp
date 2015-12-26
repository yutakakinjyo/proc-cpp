#include "Loop.h"

int loop(int (*calc)(int, int)) {
  return calc(1,2);
}
