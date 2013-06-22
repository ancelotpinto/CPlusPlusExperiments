#include <iostream>

using namespace std;

class aClassCatcher{};

class aClass{
public:
    operator aClassCatcher(){
        return aClassCatcher();
    }
};

void catchClass(aClass&){
    cout << "catchClass(aClass&)" << endl;
}
void catchClass(const aClassCatcher&){
    cout << "catchClass(const aClassCatcher&)" << endl;
}

int main()
{
    aClass aC;
    catchClass(aC); // calls catchClass(aClass&)

    catchClass(aClass()); // calls catchClass(const aClassCatcher&)
    // temporaries can't bind to non-const lvalues references
    // this call fails, except for in VS C++, if catchClass(const aClassCatcher&) is not defined

}

