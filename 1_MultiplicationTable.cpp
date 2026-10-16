#include <iostream>
#include <string>

using namespace std;

void PrintTableHeader()
{
    cout << "\n\n\t\t\tMultiplication Table From 1 To 10\t\t\t\n\n" << endl;

    cout << "\t";

    for(int i= 1; i <= 10; i++)
    {
        cout << i << "\t";
    }

    cout << "\n\n-----------------------------------------------------------------------------------\n";
}

string CulamSperator(int i)
{
    if(i < 10)
        return "   | ";
    else
        return "  | ";
}

void PrintMultiplicationTable()
{
    PrintTableHeader();

    for(int i = 1; i <= 10; i++)
    {
        cout << i << " " << CulamSperator(i) << "\t";

        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
           
        cout << endl;
    }  
}

int main()
{

    PrintMultiplicationTable();

    return 0;
}