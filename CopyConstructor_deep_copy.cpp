#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class ArrayTest{
    private:
        int m_length;
        int *p_value;
    public:
        ArrayTest(int length):
        m_length(length)
        {
            p_value = new int[m_length];
        }
        ArrayTest(const ArrayTest& arr){
            m_length = arr.m_length;

            // Bad: shallow copy
             p_value = arr.p_value;

            // Good: deep copy
            p_value = new int(m_length);
            for(int i = 0; i < m_length; i++){
                p_value[i] = arr.p_value[i];
                // *(p_value + i) = *(arr.p_value + i);
            }
        }
        ~ArrayTest(){
            delete[] p_value;
            p_value = NULL;
        }
        void setRamdonlyValue(){
            for(int i = 0; i < m_length; i++){
                *(p_value+i) = rand();
            }
        }
        void printInfo(){
            for(int i = 0; i < m_length; i++){
                cout << *(p_value+i) << endl;
            }
        }
};

int main() {
    srand( (unsigned)time( NULL ) );

    cout << "-------------- Array #1" << endl;
    ArrayTest arr1(10);
    arr1.setRamdonlyValue();
    arr1.printInfo();

    cout << "-------------- Array #2 copy constructor" << endl;
    ArrayTest arr2(arr1);
    arr2.printInfo();


    cout << "-------------- Array #2 deep copy" << endl;
    arr2.setRamdonlyValue();
    arr2.printInfo();

    cout << "-------------- Array #1 should NOT change" << endl;
    arr1.printInfo();

    return 0;
}


/*
> Shallow Copy
-------------- Array #1
1467755842
427783405
2127921326
1928552591
1212712766
296164485
1916889296
608725578
238695138
249731770
-------------- Array #2 copy constructor
1467755842
427783405
2127921326
1928552591
1212712766
296164485
1916889296
608725578
238695138
249731770
-------------- Array #2 deep copy
1058812152
1406339622
1145008072
549705337
422949565
342467385
593165735
717418771
1684089939
665137313
-------------- Array #1 should NOT change
1058812152
1406339622
1145008072
549705337
422949565
342467385
593165735
717418771
1684089939
665137313

> Deep Copy-------------- Array #1
1467352474
90828370
1839025220
1912224916
1671385857
1895995839
1639711887
2127526505
1735246985
1468150635
-------------- Array #2 copy constructor
1467352474
90828370
1839025220
1912224916
1671385857
1895995839
1639711887
2127526505
1735246985
1468150635
-------------- Array #2 deep copy
620618415
405627426
1267053204
915355976
1962525171
959214724
362128239
320657275
1250350602
1515081919
-------------- Array #1 should NOT change
1467352474
90828370
1839025220
1912224916
1671385857
1895995839
1639711887
2127526505
1735246985
1468150635
*/
