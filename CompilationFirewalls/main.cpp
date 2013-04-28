#include <iostream>

#include <functionresolution.h>

#ifndef KEEP_CLASS_SIZE
    // keep header unchanged for client regardless
    #define KEEP_CLASS_SIZE
#endif

#include <sizeandlayout.h>

using namespace std;

int main()
{
    FunctionResolution fres;
    fres.aFunction(-1);

    SizeAndLayout snl;
    cout << "snl.secondMem: " << snl.secondMem << endl;

    return 0;
}

