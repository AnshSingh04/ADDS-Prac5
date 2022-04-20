#include "FilterOdd.h"
#include <iostream>
#include <math.h>
FilterOdd::FilterOdd() {
}

bool FilterOdd::g(int x) {
   if(x%2 != 0) {
       return true;
   }
   return false; 
}
