#include <iostream>
#include "flyweight_factory.h"

int main(void) {
  FlyweightFactory fly =  FlyweightFactory::getInstance();
  std::cout << fly.getFlyweight("hoge") << std::endl;
  std::cout << fly.getFlyweight("ho") << std::endl;
  std::cout << fly.getFlyweight("hoge") << std::endl;
  return 0;
}
