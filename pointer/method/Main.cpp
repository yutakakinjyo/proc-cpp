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

  Loop loop;

  std::cout << loop.calc_loop(add) << std::endl;
  std::cout << loop.calc_loop(sub) << std::endl;
  std::cout << loop.regex_loop(target, pattern, regex) << std::endl;

  return 0;
}
