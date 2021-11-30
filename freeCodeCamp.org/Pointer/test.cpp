#include <iostream>
using namespace std;
int main()

{
    unsigned short int howOld = 50;
    unsigned short int *pAge = 0;

    pAge = &howOld;

    //Value
    cout << "howOld : " << howOld << endl;
    cout << "*pAge : " << *pAge << endl;

    //Address
    cout << "&howOld : " << &howOld << endl;
    cout << "pAge : " << pAge << endl;
    cout << "&pAge : " << &pAge << endl;

    return 0;
}