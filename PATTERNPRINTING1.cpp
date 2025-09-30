// Pattern printing 1 

#include <iostream>
using namespace std;

class Pattern
{
private:
    int iNo;

public:
    void input()
    {
        cout << "Enter number of rows : ";
        cin >> iNo;
    }

    void display()
    {
        for (int iCnt = 0 ; iCnt <= iNo ; iCnt++)
        {
            for (int ispace = 0 ; ispace < iCnt; ispace++)
            {
                cout << " ";
            }
            for (int j = 0 ; j <= iNo - iCnt ; j++)
            {
                cout << "* ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    Pattern p;
    p.input();
    p.display();
    return 0;
}

/*
OUTPUT
Testcase 1 : 
Enter number of rows : 5
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
Testcase 2 : 
Enter number of rows : 9
* * * * * * * * * *
 * * * * * * * * *
  * * * * * * * *
   * * * * * * *
    * * * * * *
     * * * * *
      * * * *
       * * *
        * *
         *
Testcase 3 : 
Enter number of rows : 3
* * * *
 * * *
  * *
   *
   
*/