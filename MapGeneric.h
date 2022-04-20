#ifndef MapGeneric_H
#define MapGeneric_H
#include <iostream>
#include <vector>
using namespace std;
class MapGeneric {
    
    private:
    virtual int f(int x);

    public:
    MapGeneric();
    vector<int> map(vector<int> x);
    
};
#endif