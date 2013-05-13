#include <iostream>

#include <uninitializedclassmembers.h>

using namespace std;

int main()
{
    UninitializedClassMembers *ucm = new UninitializedClassMembers;

    // initialized with undefined pre-initialization value of inited,
    // as per order in class declaration, value undefined
    cout << "inited_1st: " << ucm->inited_1st << endl;

    // inited() assigns int(0)
    cout << "inited: " << ucm->inited << endl;

    // uninited int, value undefined
    cout << "uninited: " << ucm->uninited << endl;

    return 0;
}

