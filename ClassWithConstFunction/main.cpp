#include <iostream>

using namespace std;

class ClassWithConstFunction{
    int value;

public:
    ClassWithConstFunction();
    const int& aFunction() const;
    int& aFunction();
};


ClassWithConstFunction::ClassWithConstFunction()
    :value()
{
}

const int &ClassWithConstFunction::aFunction() const
{
    cout << __FUNCSIG__ << endl;
    return const_cast<int&>(this->value);
}

int &ClassWithConstFunction::aFunction()
{
    cout << __FUNCSIG__ << endl;
    return value;
}

int main()
{
    ClassWithConstFunction aC;
    ClassWithConstFunction const aCconst;

    aC.aFunction();
    // the following call matches the const version of the function
    aCconst.aFunction();

    return 0;
}
