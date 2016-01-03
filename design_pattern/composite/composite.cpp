#include "composite.h"

void Composite::method1() {
    std::cout << "composite method1" << std::endl;
}

void Composite::method2() {
    std::cout << "composite method2" << std::endl;
}

void Composite::add(Component *component) {
    component->method1();
    component->method2();
}