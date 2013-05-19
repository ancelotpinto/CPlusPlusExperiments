#include "functorwithstl.h"

FunctorWithSTL::FunctorWithSTL()
    :mCount(new int(0))
{
}

void FunctorWithSTL::operator ()(int number)
{
    if(!(number % 2))
        (*mCount)++;
    return;
}

int FunctorWithSTL::count()
{
    return *mCount;
}
