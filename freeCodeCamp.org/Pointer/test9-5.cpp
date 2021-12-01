#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main()
{
    int x = 5;
    int y = 10;

    cout << "x: " << x << " - y: " << y << endl;
    swap(&x, &y);
}

void swap(int *px, int *py)
{
    int temp;

    cout << "*px: " << *px << " - *py: " << *py << endl;

    temp = *px;
    *px = *py;
    *py = temp;

    cout << "*px: " << *px << " - *py: " << *py << endl;
}
