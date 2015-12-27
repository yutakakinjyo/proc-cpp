#include "Loop.h"

int Loop::calc_loop(int (*calc)(int, int)) {
  int sum = 0;
  for(int i = 0; i < 10; i++) {
    sum += calc(1,2);
  }
  
  return sum;
}

std::string Loop::regex_loop(std::string str, boost::regex pattern, std::string (*regex)(std::string)) {
  std::string::const_iterator begin = str.begin();
  std::string::const_iterator end = str.end();
  boost::smatch matches;
  while (boost::regex_search(begin, end, matches, pattern)) {
    std::string match = matches.str();
    str.replace(begin+1, begin+match.size(), regex(match));
    begin = matches[0].second;
  }
  return str;
}
