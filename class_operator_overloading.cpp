#include <iostream>
using namespace std;

class Area
{
    private:
       int length;
       int width;

    public:
       // Constructor
       Area(): length(5), width(2){ }

       Area(int length, int width): length(length), width(width){ }

       void GetLength()
       {
           cout << "Enter length and breadth respectively: ";
           cin >> length >> width;
       }

       int AreaCalculation() {  return (length * width);  }

       void DisplayArea(int temp)
       {
           cout << "Area: " << temp << endl;
       }

       Area operator +(Area const &obj){
            Area res;
            res.length = length + obj.length;
            res.width = width + obj.width;
            return res;
       }
};

int main()
{
    Area a1;
    Area a2(3, 3);

    a1.DisplayArea(a1.AreaCalculation());
    a2.DisplayArea(a2.AreaCalculation());

    Area a3 = a1 + a2;
    a3.DisplayArea(a3.AreaCalculation());

    return 0;
}


/*
>
Area: 10
Area: 9
Area: 40
*/
