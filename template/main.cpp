#include <iostream>

template<typename T>
T add(T a, T b) {
  return a + b;
};


int main(void) {
  std::string str = add<std::string>("a", "b");
  std::cout << str << std::endl;
  
  return 0;
}
