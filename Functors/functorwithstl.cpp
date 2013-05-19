#include "functorwithstl.h"

FunctorWithSTL::FunctorWithSTL()
    :mCount()
{
}

void FunctorWithSTL::operator ()(int number)
{
    if(!(number % 2))
        mCount++;
    return;
}

int FunctorWithSTL::count()
{
    return mCount;
}
