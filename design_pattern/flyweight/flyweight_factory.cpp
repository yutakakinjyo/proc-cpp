#include "flyweight_factory.h"

FlyweightFactory& FlyweightFactory::getInstance() {
  static FlyweightFactory singleton;
  return singleton;
}

int FlyweightFactory::getFlyweight(std::string string) {
  if (map.find(string) == map.end()) {
    map[string] = string.size();
    std::cout << "nothing key " + string << std::endl;
  }
  return map[string];
}
