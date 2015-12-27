#include <iostream>
#include <boost/regex.hpp>

class Loop {

 public:
  int calc_loop(int (*add)(int, int));
  std::string regex_loop(std::string, boost::regex, std::string (*regex)(std::string));

};

