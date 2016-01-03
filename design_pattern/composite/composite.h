#ifndef COMPOSITE_COMPOSITE_H
#define COMPOSITE_COMPOSITE_H

#include "component.h"
#include "leaf.h"

class Composite : public Component {
public:
    void method1();
    void method2();
    void add(Component *component);
};

#endif //COMPOSITE_COMPOSITE_H
