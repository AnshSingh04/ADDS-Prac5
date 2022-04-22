#ifndef FilterForTwoDigitPositive_H
#define FilterForTwoDigitPositive_H
#include "FilterGeneric.h"
#include <iostream>
class FilterForTwoDigitPositive: public FilterGeneric {
    
    public:
    FilterForTwoDigitPositive();
    bool g(int x);
};
#endif