#include <iostream>
using namespace std;

int main()
{
    char mess[80];

    int i;

    cout << "Enter message" << endl;

    for (i = 0; i < 80; i++)
    {
        mess[i] = getchar();
        if (mess[i] == '\r')
        {
            break;
        }
    }

    cout << endl;
    for (i = 0; mess[i] != '\r'; i++)
    {
        cout << mess[i] + 1;
    }

    cout << endl;

    return 0;
}