#include <iostream>
#include "imple.h"

int main(void) {
    Abstract *abstract = new Imple();
    abstract->virtual_method();
    abstract->pure_virtual_method();
    std::cout << "hoge" << std::endl;
}