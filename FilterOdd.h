#ifndef FilterOdd_H
#define FilterOdd_H
#include "FilterGeneric.h"
#include <iostream>
class FilterOdd: public FilterGeneric {
    
    public:
    FilterOdd();
    
    private:
    bool g(int x);
};
#endif