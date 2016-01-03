#include "composite.h"

int main(void) {
    Leaf *leaf = new Leaf();
    Composite *composite = new Composite();
    composite->add(leaf);
}
