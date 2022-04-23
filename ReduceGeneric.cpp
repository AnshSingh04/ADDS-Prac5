#include "ReduceGeneric.h"
#include <iostream>
#include <cmath>
using namespace std;
ReduceGeneric::ReduceGeneric() {
}

int ReduceGeneric::binaryOperator(int x,int y) {
    cout<<"Wrong class"<<endl;
    return x;
}

int ReduceGeneric::reduce(vector<int> x) {
    if(x.size()-2 == 0) {
        return binaryOperator(x.at(0), x.at(1));
    }
    int result = binaryOperator(x.at(0), x.at(1));
    x.erase(x.begin());
    x.front() = result;
    return reduce(x);
}