#include <iostream>
using namespace std;

int power(int baseNum, int powNum)
{
    int result = 1;

    for (int i = 0; i < powNum; i++)
    {
        result = result * baseNum;
    }

    return result;
}
int main()

{
    int nums[] = {1, 2, 5, 7, 3};

    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << endl;
    }

    cout << "Power : " << power(4, 2) << endl;
    return 0;
}