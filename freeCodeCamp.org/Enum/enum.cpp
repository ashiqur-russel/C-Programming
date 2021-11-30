#include <iostream>
int main()
{
    enum Days
    {
        Sunday,
        Monday,
        Tuesday,
        Wedensday,
        Thursday,
        Fruday,
        Satarday
    };
    Days today;
    today = Monday;

    if (today == Sunday || today == Satarday)
    {
        std::cout << "\n Gotta love the weekend!\n";
    }
    else
    {
        std::cout << "\nBack To work.\n";
    }

    return 0;
}