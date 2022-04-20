#ifndef MapSquare_H
#define MapSquare_H
#include "MapGeneric.h"
#include <iostream>
class MapSquare: public MapGeneric {
    
    public:
    MapSquare();
    
    private:
    int f(int x);
};
#endif