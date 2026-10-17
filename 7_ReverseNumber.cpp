#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Massege)
{
    int Number = 0;

    do
    {
        cout << Massege << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

int ReverseNumber(int Number)
{
    int Remainder = 0;
    int Number2 = 0;

    while (Number > 0)
    {
       Remainder = Number % 10;
       
       Number = Number / 10;

       Number2 = Number2 * 10 + Remainder;       
    }

    return Number2;
}

int main()
{

    int Result = ReverseNumber(ReadPositiveNumber("Please enter a positive Number: "));

    cout << "Revers is: " << Result;

    return 0;
}