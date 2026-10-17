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

void SumOfDigits(int Number)
{
    int Remainder = 0;
    int sum = 0;

    while (Number > 0)
    {
       Remainder = Number % 10;
       
       Number = Number / 10;

       sum += Remainder;      
    }

    cout << sum << endl;
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a positive Number: ");

    cout << "Sum Of Digits = ";
    SumOfDigits(Number);

    return 0;
}