#include <iostream>

using namespace std;

class SimpleCat
{
public:
    SimpleCat();            // constructor
    SimpleCat(SimpleCat &); // copy constructor
    ~SimpleCat();           //Destructor
};

SimpleCat::SimpleCat()
{
    cout << "Simple Cat Constructor..." << endl;
}

SimpleCat::SimpleCat(SimpleCat &)
{
    cout << "Simple Cat Copy Constructor..." << endl;
}
SimpleCat::~SimpleCat()
{
    cout << "Simple Cat Destructor..." << endl;
}

SimpleCat functionOne(SimpleCat theCat);
SimpleCat *functionTwo(SimpleCat *theCat);

int main()
{
    cout << "Making a Cat..." << endl;
    SimpleCat Frisky;
    cout << "Calling FunctionOne" << endl;
    functionOne(Frisky);

    cout << "Calling FunctionTwo" << endl;
    functionTwo(&Frisky);

    return 0;
}
//Pass by Value
SimpleCat functionOne(SimpleCat theCat)
{
    cout << "Function One. Returning... " << endl;
    return theCat;
}
//Pass by Reference
SimpleCat *functionTwo(SimpleCat *theCat)
{
    cout << "Function Two. Returning... " << endl;
    return theCat;
}