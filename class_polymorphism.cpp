#include <iostream>
using namespace std;

class shape{
    protected:
        int width;
        int length;
    public:
        void setWidth(int newWidth){
            width = newWidth;
        }
        void setLength(int newLength){
            length = newLength;
        }
        virtual int getArea() = 0;
};

class square : public shape{
    public:
        int getArea(){
            return width * length;
        }
};

class rectangle : public shape{
    public:
        int getArea(){
            return width * length;
        }
};

int main() {
    square m;
    rectangle n;
    shape *s1 = &m;
    shape *s2 = &n;
    s1->setLength(10);
    s1->setWidth(10);
    cout << s1->getArea() << endl;
    cout << m.getArea() << endl;

    s2->setLength(10);
    s2->setWidth(5);
    cout << s2->getArea() << endl;
    cout << n.getArea() << endl;

    return 0;
}

/*
100
100
50
50
*/
