#ifndef FilterNonPositive_H
#define FilterNonPositive_H
#include "FilterGeneric.h"
#include <iostream>
class FilterNonPositive: public FilterGeneric {
    
    public:
    FilterNonPositive();
    
    private:
    bool g(int x);
};
#endif