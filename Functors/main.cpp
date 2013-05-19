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

    // passing functor to for_each gives count of even numbers
    // the functor is taken by value so assigning return value of for_each
    // to count_even is needed
    count_even = for_each(intVector.begin(), intVector.end(), count_even);

    cout << "vecEvenCount: " << count_even.count() << endl;

    return 0;
}

