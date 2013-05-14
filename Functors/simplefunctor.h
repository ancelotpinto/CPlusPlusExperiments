#ifndef SIMPLEFUNCTOR_H
#define SIMPLEFUNCTOR_H

#include <string>

class SimpleFunctor
{
    std::string mName;

public:
    SimpleFunctor(const char *name);

    void operator()();
};

#endif // SIMPLEFUNCTOR_H
