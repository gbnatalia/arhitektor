#include <iostream>
#include "Singleton.h"

using namespace std;

int main() {

    Singleton * s1 = Singleton::GetInstance();
    Singleton * s2 = Singleton::GetInstance();

    if (s1 == s2)
        cout << "s1 and s2 is one object" << endl;
    else
        cout << "s1 and s2 is two objects" << endl;

    return 0;
}
