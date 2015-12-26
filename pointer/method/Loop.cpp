#include "Loop.h"

int loop(int (*calc)(int, int)) {
  int sum = 0;
  for(int i = 0; i < 10; i++) {
    sum += calc(1,2);
  }
  
  return sum;
}

std::string regex_loop(std::string str) {
  std::string::const_iterator begin = str.begin();
  std::string::const_iterator end = str.end();
  boost::smatch matches;
  boost::regex pattern(".+");
  while (boost::regex_search(begin, end, matches, pattern)) {
    std::string match = matches.str();
    str.replace(begin, begin+match.size(), "hoge");
    begin = matches[0].second;
  }
  return str;
}
