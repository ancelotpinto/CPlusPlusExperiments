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
    cout << "catchClass(const aClass__&)" << endl;
}

int main()
{
    aClass aC;
    catchClass(aC);

    catchClass(aClass());

}

