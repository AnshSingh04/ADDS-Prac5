#include "FilterGeneric.h"
#include <iostream>
#include <cmath>
using namespace std;
int counter2 = 0;
vector<int> result2;
vector<int> temp2;
FilterGeneric::FilterGeneric() {
}

bool FilterGeneric::g(int x) {
    return true;
}

vector<int> FilterGeneric::filter(vector<int> x) {
    temp2.clear();
    if(counter2 == x.size()) {
        return result2;
    }
    bool ans = g(x.at(counter2));
    if(ans == true) {
        result2.push_back(x.at(counter2));
    }
    counter2++;
    filter(x);
    copy(result2.begin(), result2.end(), back_inserter(temp2));
    counter2 = 0;
    result2.clear();
    return temp2;
}