#include <iostream>
using namespace std;

class testClass
{
    private:
        int i = 0;
    public:
       // Constructor
       testClass(int index): i(index){
           cout << "constructor" << i << endl;
       }

       ~testClass(){
           cout << "deconstructor" << i << endl;
       }
};

int main()
{
    testClass tc1(1);
    testClass *tc2 = new testClass(2);
    delete tc2;

    cout << "About to return " << endl;
    return 0;

}


/*
>
constructor1
constructor2
deconstructor2
About to return 
deconstructor1
*/
