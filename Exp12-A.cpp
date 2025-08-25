//Varija K
//24070123165
#include <iostream>
using namespace std;

class student {
    int rno;
    string name;
    float fee;

public:
    student();         
    void display();    
};

student::student() {
    cout << "Enter the RollNo: ";
    cin >> rno;
    cout << "Enter the Name: ";
    cin >> name;
    cout << "Enter the Fee: ";
    cin >> fee;
}

void student::display() {
    cout << endl << rno << "\t" << name << "\t" << fee << endl;
}

int main() {
    student s1;     
    s1.display();   
    return 0;
}
