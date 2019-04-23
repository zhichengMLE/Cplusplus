#include <iostream>
using namespace std;

class Area
{
    private:
       int length;
       int breadth;

    public:
       // Constructor
       Area(): length(5), breadth(2){ }

       void GetLength()
       {
           cout << "Enter length and breadth respectively: ";
           cin >> length >> breadth;
       }

       int AreaCalculation() {  return (length * breadth);  }

       void DisplayArea(int temp)
       {
           cout << "Area: " << temp;
       }
};

int main()
{
    Area area;
    int temp;

    temp = area.AreaCalculation();
    area.DisplayArea(temp);

    return 0;
}
