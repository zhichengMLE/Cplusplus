#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main () {
    srand( (unsigned)time( NULL ) );

    for(int i = 0; i < 10; i++) {
        cout << rand() << endl;
    }

    return 0;
}

/*
>>
847895711
2029216932
861178117
1928315286
1519294925
1209241645
2086575954
674103368
1679068051
14127930

Process finished with exit code 0

>>
848752868
1403069102
2011953254
620834316
1886791886
1567696400
796529757
2010054148
914814479
1451519680

Process finished with exit code 0

*/
