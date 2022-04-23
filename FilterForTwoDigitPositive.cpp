#include "FilterForTwoDigitPositive.h"
#include <iostream>
#include <math.h>
FilterForTwoDigitPositive::FilterForTwoDigitPositive() {
}

bool FilterForTwoDigitPositive::g(int x) {
    if(x > 9 && x < 100) {
        return false;
    }
    return true; 
}
