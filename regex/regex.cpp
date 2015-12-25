#include <iostream>
#include <boost/regex.hpp>

int main(void) {
  std::string str = "(hoge)";
  std::string::const_iterator begin = str.begin();
  std::string::const_iterator end = str.end();
  boost::smatch matches;
  boost::regex pattern(".+");
  while (boost::regex_search(begin, end, matches, pattern)) {
    std::string match = matches.str();
    std::cout << match << std::endl;
    str.replace(begin, begin+match.size(), "hoge");
    std::cout << str << std::endl;
    begin = matches[0].second;
  }
    
  return 0;
}
