#include <algorithm>
#include <iostream>
#include <vector>

#include "simplefunctor.h"
#include "functorwithstl.h"

using namespace std;

int main()
{
    SimpleFunctor sf("El Marco");
    // invoking the functor calls matched operator function
    sf();

    vector<int> intVector;

    for(int i = 0; i < 10; i++)
        intVector.push_back(i);

    FunctorWithSTL count_even;

    // while count_even is passed by value to for_each
    // the internal count is shared across copies of the functor
    // so all copies have the same value
    for_each(intVector.begin(), intVector.end(), count_even);

    cout << "vecEvenCount: " << count_even.count() << endl;

    return 0;
}

