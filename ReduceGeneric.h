#ifndef ReduceGeneric_H
#define ReduceGeneric_H
#include <iostream>
#include <vector>
using namespace std;
class ReduceGeneric {
    
    private:
    int binaryOperator(int x, int y);

    public:
    ReduceGeneric();
    int reduce(vector<int> x);
    
};
#endif