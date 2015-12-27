#include <iostream>
#include "Loop.h"

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

std::string regex(std::string match) {
  return "fffuga";
}

int main(void) {

  std::string target = "(hoge)";
  boost::regex pattern("hoge");

  std::cout << loop(add) << std::endl;
  std::cout << loop(sub) << std::endl;
  std::cout << regex_loop(target, pattern, regex) << std::endl;

  return 0;
}
