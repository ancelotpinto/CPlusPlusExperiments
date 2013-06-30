#include <iostream>

using namespace std;

int main()
{
    int switchVar = 0;
    switch(switchVar){ // control falls through the switch statement
    case 1:
        cout << "1 was called" << endl;
        break;
    }
    return 0;
}

