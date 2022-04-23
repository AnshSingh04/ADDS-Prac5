#include "MapGeneric.h"
#include <iostream>
#include <math.h>
using namespace std;
int counter = 0;
vector<int> result;
vector<int> temp;
MapGeneric::MapGeneric() {
}

int MapGeneric::f(int x) {
    return x;
}

vector<int> MapGeneric::map(vector<int> x) {
    temp.clear();
    if(counter == x.size()) {
        return result;
    }
    result.push_back(f(x.at(counter)));
    counter++;
    map(x);
    copy(result.begin(), result.end(), back_inserter(temp));
    counter = 0;
    result.clear();
    return temp;
}