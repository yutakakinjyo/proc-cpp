#ifndef FLYWEIGHT_FACTORY_H
#define FLYWEIGHT_FACTORY_H

#include <map>
#include <iostream>

class FlyweightFactory {
 public:
  static FlyweightFactory& getInstance();
  int getFlyweight(std::string);
 private:
  std::map<std::string, int> map;
};

#endif // FLYWEIGHT_FACTORY_H
