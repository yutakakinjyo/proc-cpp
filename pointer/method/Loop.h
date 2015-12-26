#include <iostream>
#include <boost/regex.hpp>

int loop(int (*add)(int, int));
std::string regex_loop(std::string, boost::regex, std::string (*regex)(std::string));

