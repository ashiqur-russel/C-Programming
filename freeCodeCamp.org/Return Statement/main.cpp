#include <iostream>
#include <cmath>

using namespace std;

double cube(double num);
int main()
{
    cout << cube(5);
    return 0;
}

double cube(double num)
{
    return num * num * num;
}
