#ifndef PREDICATEFUNCTOR_H
#define PREDICATEFUNCTOR_H

class FunctorWithSTL
{
    int mCount;

public:
    FunctorWithSTL();
    void operator()(int);
    int count();
};

#endif // PREDICATEFUNCTOR_H
