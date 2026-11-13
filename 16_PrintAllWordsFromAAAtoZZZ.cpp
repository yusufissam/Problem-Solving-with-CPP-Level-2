#include<iostream>
using namespace std;

void PrintAllWords()
{
   for (int i = 65; i <= 90; i++)
   {
    for (int j = 65; j <= 90; j++)
    {
        for (int t = 65; t <= 90; t++)
        {
            cout << char(i);
            cout << char(j);
            cout << char(t);

            cout << endl;
        }
    }
   }
}

int main()
{

    PrintAllWords();

    return 0;

}