#include "flyweight_factory.h"

FlyweightFactory& FlyweightFactory::getInstance() {
  static FlyweightFactory singleton;
  return singleton;
}

int FlyweightFactory::getFlyweight(std::string string) {
  if (this->map.find(string) != this->map.end()) {
    map[string] = string.size();
  }
  return map[string];
}
