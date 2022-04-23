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

    myvector.push_back(6);
    myvector.push_back(-15);
    myvector.push_back(53);
    myvector.push_back(-16);
    myvector.push_back(73);
    myvector.push_back(128);
    myvector.push_back(105);
    myvector.push_back(104);
    myvector.push_back(-71);
    myvector.push_back(-179);
    myvector.push_back(102);
    myvector.push_back(12);
    myvector.push_back(25);
    myvector.push_back(-145);
    myvector.push_back(-99);
    myvector.push_back(199);
    myvector.push_back(-156);
    myvector.push_back(-186);
    myvector.push_back(43);
    myvector.push_back(-189);

	FilterNonPositive f;
	myvector= f.filter(myvector);
	FilterOdd v;
	myvector = v.filter(myvector);
    for (int i = 0; i < myvector.size(); i++) {
    cout << myvector.at(i) <<endl;
    }

}