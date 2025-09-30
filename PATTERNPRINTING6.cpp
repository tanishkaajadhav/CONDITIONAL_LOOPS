// Pattern Printing 6

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 0; i <= rows; i++)
    {
        for (int space = 0; space < i; space++)
            cout << " ";
        for (int j = 0; j <= rows - i; j++)
            cout << "* ";
        cout << "\n";
    }
    for (int i = 1; i <= rows; i++)
    {
        for (int space = 0; space <= rows - i - 1; space++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << "\n";
    }

    return 0;
}

/* Output

Enter number of rows: 5
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *

*/
