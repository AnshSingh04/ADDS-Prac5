#ifndef ReduceGCD_H
#define ReduceGCD_H
#include "ReduceGeneric.h"
#include <iostream>
class ReduceGCD: public ReduceGeneric {
    
    public:
    ReduceGCD();
    int binaryOperator(int x, int y);
};
#endif