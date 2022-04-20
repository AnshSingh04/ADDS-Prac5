#include "FilterGeneric.h"
#include <iostream>
#include <cmath>
using namespace std;
FilterGeneric::FilterGeneric() {
}

bool FilterGeneric::g(int x) {
    return true;
}

vector<int> FilterGeneric::filter(vector<int> x) {
    static int counter = 0;
    static vector<int> result;
    if(counter == x.size()-1) {
        return result;
    }
    bool ans = g(x[counter]);
    if(ans == false) {
        result.push_back(x[counter]);
    }
    counter++;
    filter(x);
    return result;
}