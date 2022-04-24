#include <iostream>
#include <vector>
#include <stdio.h>      
#include "MapGeneric.h"
#include "FilterGeneric.h"
#include "ReduceGeneric.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceGCD.h"
#include "ReduceMinimum.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include <sstream>
using namespace std;
int main()
{
	vector<int> myvector;

    myvector.push_back(1);
    myvector.push_back(-15);
    myvector.push_back(-53);
    myvector.push_back(-16);
    myvector.push_back(44);
    myvector.push_back(128);
    myvector.push_back(100);
    myvector.push_back(67);
	FilterForTwoDigitPositive f;
	myvector= f.filter(myvector);
	//FilterOdd v;
	//myvector = v.filter(myvector);
    for (int i = 0; i < myvector.size(); i++) {
    cout << myvector.at(i) <<endl;
    }

}