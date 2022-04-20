#include "MapGeneric.h"
#include <iostream>
#include <math.h>
using namespace std;
MapGeneric::MapGeneric() {
}

int MapGeneric::f(int x) {
    return x;
}

vector<int> MapGeneric::map(vector<int> x) {
    static int counter = 0;
    static vector<int> result;
    if(counter == x.size()-1) {
        return result;
    }
    result.push_back(f(x[counter]));
    counter++;
    map(x);
    return result;
}