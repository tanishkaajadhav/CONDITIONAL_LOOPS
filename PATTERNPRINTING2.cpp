// PATTERN PRINTING 2

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows : ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


/*
OUTPUT
Testcase 1 : 
Enter number of rows :  6
*
* *
* * *
* * * *
* * * * *
* * * * * *

Testcase 2 : 
Enter number of rows : 12
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * * * *
* * * * * * * * * *
* * * * * * * * * * *
* * * * * * * * * * * *
  
*/