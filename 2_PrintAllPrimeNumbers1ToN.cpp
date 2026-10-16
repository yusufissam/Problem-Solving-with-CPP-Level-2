#include <iostream>
#include<cmath>

using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

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

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbers(int N)
{
    cout << "\n";
    cout << "Prime Numbers from " << 1 << " To " << N << " are : " << endl;

    for (int Counter = 1; Counter <= N; Counter++)
    {
        if (CheckPrime(Counter) == enPrimeNotPrime::Prime)
        {
            cout << Counter << endl;
        }
    }
}

int main()
{
    PrintPrimeNumbers(ReadPositiveNumber("Please enter a Positive Number: "));

    return 0;
}