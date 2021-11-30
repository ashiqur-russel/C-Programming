#include <iostream>
using namespace std;

int main()
{
    char buffer[80] = {'\0'};
    cout << "Enter the string: ";
    cin.get(buffer, 79);
    cout << "Here is the buffer: " << buffer << endl;
    return 0;
}