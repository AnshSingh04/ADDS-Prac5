#ifndef ReduceMinimum_H
#define ReduceMinimum_H
#include "ReduceGeneric.h"
#include <iostream>
class ReduceMinimum: public ReduceGeneric {
    
    public:
    ReduceMinimum();
    
    private:
    int binaryOperator(int x, int y);
};
#endif