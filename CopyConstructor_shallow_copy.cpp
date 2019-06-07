#include <iostream>
using namespace std;

class Coordinate{
    private:
        int m_x;
        int m_y;
    public:
        Coordinate(int x, int y):
        m_x(x),
        m_y(y)
        {
        }
        Coordinate(const Coordinate& coord){
            m_x = coord.m_x;
            m_y = coord.m_y;
        }
        ~Coordinate(){

        }
        void printInfo(){
            cout << "X: " << m_x << ", " << "Y: " << m_y << endl;
        }
};

int main() {

    Coordinate coord1(1, 2);
    Coordinate coord2(coord1);

    coord1.printInfo();
    coord2.printInfo();
    return 0;
}




/*
X: 1, Y: 2
X: 1, Y: 2
*/
