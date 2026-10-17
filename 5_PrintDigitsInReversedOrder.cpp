
// My Solution

/*
#include<iostream>
#include<cmath>
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


void PrintReversedNumber(int Number)
{

    while (Number > 0)
    {
       cout << Number % 10 << endl;
       
       float sum = Number / 10;
       
       Number = round(sum);
    }

}



int main()
{

    PrintReversedNumber(ReadPositiveNumber("Please enter a positive Number: "));

    return 0;
}

*/


// Abu-Hadhoud's Solution (Understood and Rewritten by Me)

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

void PrintDigits(int Number)
{
    int Remainder = 0;

    while (Number > 0)
    {
       Remainder = Number % 10;
       
       Number = Number / 10;

       cout << Remainder << endl;       
    }
}

int main()
{

    PrintDigits(ReadPositiveNumber("Please enter a positive Number: "));

    return 0;
}