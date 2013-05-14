#include <iostream>

#include "simplefunctor.h"

using namespace std;

SimpleFunctor::SimpleFunctor(const char *name)
    :mName(name)
{
}

void SimpleFunctor::operator ()()
{
    cout << "name: " << mName << endl;
}
