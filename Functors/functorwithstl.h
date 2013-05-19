#ifndef PREDICATEFUNCTOR_H
#define PREDICATEFUNCTOR_H

#include <memory>

class FunctorWithSTL
{
    std::tr1::shared_ptr<int> mCount;

public:
    FunctorWithSTL();
    void operator()(int);
    int count();
};

#endif // PREDICATEFUNCTOR_H
