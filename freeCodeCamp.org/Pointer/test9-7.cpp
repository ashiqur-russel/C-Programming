#include <iostream>
using namespace std;
short Factor(int n, int *pSquared, int *pCubed);
int main()
{
    int number, squared, cubed;
    short error;
    cout << "Enter a number(0 - 20) : ";
    cin >> number;
    error = Factor(number, &squared, &cubed);
    if (!error)
    {
        cout << "number : " << number << endl;
        cout << "square : " << squared << endl;
        cout << "cubed : " << cubed << endl;
    }
    else
        cout << "Error encountered !!" << endl;
    return 0;
}

short Factor(int n, int *pSquared, int *pCubed)
{
    short value = 0;
    if (n > 20)
    {
        value = 1;
    }
    else
    {
        *pSquared = n * n;
        *pCubed = n * n * n;
        value = 0;
    }
    return value;
}