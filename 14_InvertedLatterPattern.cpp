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

void PrintInvertedNumberPattern(int Number)
{
    for (int i = Number; i > 0; i--)
    {
        int AsciiVal = 64 + i;
        
        for (int j = 0; j < i; j++)
        {

            cout << char(AsciiVal);
        }
        
        cout << endl;
    }
}

int main()
{

    PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive Number: "));

    return 0;
}

