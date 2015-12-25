#include <iostream>
#include <boost/regex.hpp>

int main(void) {
  std::string str = "hogehuga";
  std::string::const_iterator begin = str.begin();
  std::string::const_iterator end = str.end();
  boost::smatch matches;
  boost::regex pattern("hoge");
  while (boost::regex_search(begin, end, matches, pattern)) {
    begin = matches[0].second;
    std::cout << matches[0] << std::endl;
  }
    
  return 0;
}
