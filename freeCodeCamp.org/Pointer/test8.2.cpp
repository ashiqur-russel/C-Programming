#include <iostream>
typedef unsigned short int USHORT;

int main()
{

    USHORT myAge;          // a variable
    USHORT *pAge = &myAge; // a pointer

    myAge = 50;

    std::cout << "myAge : " << myAge << std::endl;
    pAge = &myAge; // assign address of myAge to pAge
    std::cout << "* pAge : " << *pAge << std::endl;
    std::cout << "---------" << std::endl;

    *pAge = 70; // sets myAge=70;
    std::cout << "* pAge : " << *pAge << std::endl;
    std::cout << "myAge : " << myAge << std::endl;
}