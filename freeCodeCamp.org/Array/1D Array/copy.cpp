#include <iostream>
using namespace std;

int main()
{
    int a[10], b[10], i;

    for (int i = 1; i < 5; i++)
    {
        a[i] = i;

        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < 5; i++)
    {
        b[i] = a[i];

        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}