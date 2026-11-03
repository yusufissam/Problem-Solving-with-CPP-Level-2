//My Solution

/*#include <iostream>
using namespace std;

int ReadPositiveNumber(string Messege)
{
    int Number = 0;

    do
    {
        cout << Messege << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

int ReadFindNum(string Messege)
{
    int Number = 0;

    do
    {
        cout << Messege << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

void SumOfDigits(int Number1, int Number2)
{
    int Remainder = 0;
    int sum = 0;

    while (Number1 > 0)
    {
       Remainder = Number1 % 10;
       
       Number1 = Number1 / 10;

       if (Remainder == Number2)
       {
            sum++;
       }     
    }

    cout << sum << endl;
}


int main()
{
    int PositiveNumbr = ReadPositiveNumber("Please enter a Positive Number: ");

    int FindNumber = ReadFindNum("Please enter your Number: ");

    SumOfDigits(PositiveNumbr, FindNumber);

    return 0;
}*/


// Abu-Hadhoud's Solution (Understood and Rewritten by Me)

#include<iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl; 
        cin >> Number;            
    } while (Number <= 0);        

    return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0;
    int Remainder = 0;
    
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        
        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;
}

int main()
{

    int Number = ReadPositiveNumber("Please enter the main number?");

    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check?");
    

    cout << "\nDigit " << DigitToCheck << " Frequency is "
         << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";
    
    return 0;
}