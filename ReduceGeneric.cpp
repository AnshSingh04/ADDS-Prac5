#include "ReduceGeneric.h"
#include <iostream>
#include <cmath>
using namespace std;
ReduceGeneric::ReduceGeneric() {
}

int ReduceGeneric::binaryOperator(int x,int y) {
    return x;
}

int ReduceGeneric::reduce(vector<int> x) {
    static vector<int>::iterator i=x.begin();
    static int result;
    if (i==x.begin()) {
        result=binaryOperator(*x.begin(),*i);
        i++;
        return reduce(x);
    } 
    else if (i==x.end()) {
        return result;
    }   
    else {
        result=binaryOperator(result,*i);
        i++;
        return reduce(x);
    }
    return result;
    
}