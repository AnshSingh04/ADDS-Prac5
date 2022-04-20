#include "ReduceMinimum.h"
#include <iostream>
#include <cmath>
using namespace std;
ReduceMinimum::ReduceMinimum() {
}

int ReduceMinimum::binaryOperator(int x,int y) {
    if ( x == y ) {
		return x;
	}
	else if ( x < y ) {
		return x;
	}
	else if ( x > y ) {
		return y;
	}
	else
		return 0;
}
