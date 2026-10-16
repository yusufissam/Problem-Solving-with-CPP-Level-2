#include <iostream>
#include <string>

using namespace std;

// Instructor's Solution (Reviewed and Understood)

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

bool isPerfectNumber(int Number)
{
    int sum = 0;

    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            sum += i;
    }

    return Number == sum;
}

void PrintResult(int Number)
{


    if(isPerfectNumber(Number))
        cout << Number << " Is Perfect Number";
    else
        cout << Number << " Is Not Perfect Number";
}

int main()
{

    PrintResult(ReadPositiveNumber("Please enter a Positive Number: "));

    return 0;
}


// My Original Solution

/*

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

int CheckPerfectNumber(int Number)
{
    int sum = 0;

    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            sum += i;
    }

    return sum;
}

void PrintPerNumOrNotPerfNum(int Number)
{


    if(CheckPerfectNumber(Number) == Number)
        cout << Number << " Is Perfect Number";
    else
        cout << Number << " Is Not Perfect Number";
}

int main()
{

    PrintPerNumOrNotPerfNum(ReadPositiveNumber("Please enter a Positive Number: "));

    return 0;
}

*/
