#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int wnum = 5;
    double dnum = 5.5;

    cout << wnum << endl;
    cout << 5 + 7 << endl;
    cout << 10 % 3 << endl;

    cout << "--------------" << endl;

    cout << "Pow : " << pow(3, 3) << endl;
    cout << "Sqrt : " << sqrt(36) << endl;
    cout << "Round: " << round(4.1) << endl;
    cout << "Floor: " << floor(4.1) << endl;
    cout << "Fmax :" << fmax(1, 10) << endl;
    cout << "Fmin :" << fmin(1, 9) << endl;

    return 0;
}