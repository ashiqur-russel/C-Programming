#include <iostream>

int main()
{
    using namespace std;

    int intOne;
    int &rSomeRef = intOne;

    intOne = 5;

    cout << "intOne = " << intOne << endl;
    cout << "rSomeRef = " << rSomeRef << endl;

    rSomeRef = 7;
    cout << "intOne = " << intOne << endl;
    cout << "rSomeRef = " << rSomeRef << endl;

    cout << "i&ntOne = " << &intOne << endl;
    cout << "&rSomeRef = " << &rSomeRef << endl;

    return 0;
}