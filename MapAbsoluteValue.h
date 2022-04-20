#ifndef MapAbsoluteValue_H
#define MapAbsoluteValue_H
#include "MapGeneric.h"
#include <iostream>
class MapAbsoluteValue: public MapGeneric {
    
    public:
    MapAbsoluteValue();
    
    private:
    int f(int x);
};
#endif