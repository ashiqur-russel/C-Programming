#include <iostream>
using namespace std;

int getMax(int num1, int num2);
int getMax(int num1, int num2, int num3);

int main()
{
    bool isMale = true;
    bool isTall = true;

    if (isMale && isTall)
    {
        cout << "you are a male" << endl;
    }
    else
    {
        cout << "you are a female" << endl;
    }

    cout << getMax(4, 9) << endl;
    cout << getMax(4, 3, 54) << endl;

    return 0;
}

//function for finiding biggest number from two number
int getMax(int num1, int num2)
{
    int result;
    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }

    return result;
}

// function for finiding biggest number from three number
int getMax(int num1, int num2, int num3)
{
    int result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}
