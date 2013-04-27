#include <iostream>

#ifdef UNLOCK_PRIVATE_MEMBERS
    #define class struct // [1] class keyword redefined as struct
#endif

#include <classwithprivatemembers.h> // [2] members are now public by default

#ifdef UNLOCK_PRIVATE_MEMBERS
    #undef class
#endif

using namespace std;

int main()
{
    ClassWithPrivateMembers obj;

    cout << "obj.anInt: " << obj.anInt << endl; // [3] prints -1, anInt accessible

//    cout << "obj.aFunction(): "  << obj.aFunction() << endl;
//    [4] wont work with Visual C++ as access specifier incorporated into the name mangling scheme

    return 0;
}

