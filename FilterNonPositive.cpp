#include "FilterNonPositive.h"
#include <iostream>
#include <math.h>
FilterNonPositive::FilterNonPositive() {
}

bool FilterNonPositive::g(int x) {
   if(x < 0) {
       return true;
   }
   return false; 
}
