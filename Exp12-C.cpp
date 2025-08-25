//Varija K
//24070123165
#include <iostream>
using namespace std;

class DefaultConst {
    int x, y;
public:
    DefaultConst() {   
        x = 5;
        y = 10;
    }
    void show() {
        cout << "x=" << x << " y=" << y << endl;
    }
};

int main() {
    DefaultConst d;
    d.show();


}
