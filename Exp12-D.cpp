//Varija K
//24070123165
#include <iostream>
using namespace std;

class ParaConst {
    int x, y;

public:
    // Parameterized Constructor
    ParaConst(int a, int b) {
        x = a;
        y = b;
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    ParaConst p1(10, 20);  // parameterized constructor called
    p1.show();

    ParaConst p2(50, 100); // another object with different values
    p2.show();

    return 0;
}