#ifndef FilterGeneric_H
#define FilterGeneric_H
#include <iostream>
#include <vector>
using namespace std;
class FilterGeneric {
    
    private:
    virtual bool g(int x);

    public:
    FilterGeneric();
    vector<int> filter(vector<int> x);
    
};
#endif