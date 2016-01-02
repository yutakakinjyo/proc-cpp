#include <iostream>
#include "hoge_stragety.h"
#include "fuga_strategy.h"

int main(void) {
  Strategy *strategy = new HogeStrategy();
  strategy->exec();
  strategy = new FugaStrategy();
  strategy->exec();
  return 0;
}
