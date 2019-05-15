#include <iostream>
using namespace std;

class motherClass{
    public:
        motherClass(){
            cout << "mother class constructor" << endl;
        }

        ~motherClass(){
            cout << "mother class deconstructor" << endl;
        }
};

class childClass: public motherClass{
    public:
        childClass(){
            cout << "child class constructor" << endl;
        }
        ~childClass(){
            cout << "child class deconstructor" << endl;
        }
};

int main() {
    childClass cc;

    return 0;
}

/*
mother class constructor
child class constructor
child class deconstructor
mother class deconstructor
*/
