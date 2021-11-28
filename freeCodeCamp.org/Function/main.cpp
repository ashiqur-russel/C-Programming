#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);
int main()
{
    sayHi("Mike", 30);
    sayHi("Ashiq", 27);
    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello " << name << " you are " << age << " years old" << endl;
}
