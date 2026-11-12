// My Solution

/*#include<iostream>
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

void PrintPalindOrNotPalind(int Number)
{
    short Number2 = ReverseNumber(Number);

    if (Number == Number2)
        cout << "\nYes, it is a Palindrome number.";
    else
        cout << "\nNo, it is NOT a Palindrome number.";
}

int main()
{

    PrintPalindOrNotPalind(ReadPositiveNumber("Please enter a positive Number: "));


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

bool IsPalindromeNumber(int Number)
{
   return Number == ReverseNumber(Number);

}

int main()
{
    if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive Number: ")))

        cout << "\nYes, it is a Palindrome number.";
    else
        cout << "\nNo, it is NOT a Palindrome number.";


    return 0;
}