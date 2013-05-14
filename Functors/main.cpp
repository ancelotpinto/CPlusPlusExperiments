#include <iostream>

#include <simplefunctor.h>

using namespace std;

int main()
{
    SimpleFunctor sf("El Marco");
    // invoking the functor calls matched operator function
    sf();
    return 0;
}

