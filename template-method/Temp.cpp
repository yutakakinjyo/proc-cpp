#include "Temp.h"

void Temp::pre() {
  std::cout << "pre" << std::endl;
}

void Temp::cont() {
  std::cout << "cont" << std::endl;
}

void Temp::post() {
  std::cout << "post" << std::endl;
}

void Temp::exec() {
  pre();
  cont();
  post();
}




