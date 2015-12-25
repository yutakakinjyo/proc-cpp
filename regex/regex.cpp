#include <boost/regex.hpp>

int main(void) {
  std::string str = "hoge";
  std::string::const_iterator begin = str.begin();
  std::string::const_iterator end = str.end();
  boost::smatch matches;
  boost::regex pattern("hoge");
  while (boost::regex_search(begin, end, matches, pattern)) {
  }
    
  return 0;
}
