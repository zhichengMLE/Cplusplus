#include <iostream>
using namespace std;
bool printArray(string* arr, int length){
    if(arr == NULL){
        return false;
    }

    for(int i = 0; i < length; i++){
        cout << arr[i] << endl;
    }
    return true;
}

int main() {
    string arrMonth[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    string* pMonth = NULL;
    pMonth = arrMonth;

    cout << printArray(pMonth, sizeof(arrMonth) / sizeof(*arrMonth)) << endl;

    return 0;
}




/*
>>
Jan
Feb
Mar
Apr
May
Jun
Jul
Aug
Sep
Oct
Nov
Dec
1

Process finished with exit code 0
*/
