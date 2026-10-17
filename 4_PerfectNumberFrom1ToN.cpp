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

void PrintPerfectNumbers(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        if (isPerfectNumber(i))
            cout << i << endl;
    }
} 

int main()
{

    PrintPerfectNumbers(ReadPositiveNumber("Please enter a Positive Number: "));

    return 0;
}
