#include <iostream>
using namespace std;
int main()
{
    cout << "enter the numerater " << "\n";
    int numerater;
    cin >> numerater;

    cout << " enter the denominator " << "\n";
    int denominator;
    cin >> denominator;

    int remainder = numerater % denominator;
    cout << "remainder is " << remainder;

}
