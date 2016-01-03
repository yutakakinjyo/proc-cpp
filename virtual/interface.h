#ifndef VIRTUAL_INTERFACE_H
#define VIRTUAL_INTERFACE_H

class Interface {
    virtual void virtual_method();
    virtual void pure_virtual_method() = 0;
};

#endif //VIRTUAL_INTERFACE_H
