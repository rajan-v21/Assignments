#include <iostream>
#include "D:\#CDAC\Assignments\C++\Day5\Inheritance\Q6\client\Base1.h"
#include "D:\#CDAC\Assignments\C++\Day5\Inheritance\Q6\client\Base2.h"
using namespace std;

class Sub {
public:
    Sub() {
        cout << "Sub constructor called" << endl;
    }
    void subMethod() {
        cout << "Sub method called" << endl;
    }
};

int main() {
    Base1 b1;
    Base2 b2;
    Sub s;

    b1.funBase1();
    b2.funBase2();
    s.subMethod();

    return 0;
}