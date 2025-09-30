// Print even values between 0 and 10 (using while loop)

#include <iostream>
using namespace std;

class EvenValues
{
private:
    int start, end;

public:
    EvenValues(int s, int e)
    {
        start = s;
        end = e;
    }

    void Even()
    {
        cout << "Even numbers using while loop: \n";
        int iCnt = start;
        while (iCnt <= end)
        {
            if (iCnt % 2 == 0)
            {
                cout << iCnt << " \n";
            }
            iCnt++;
        }
        cout << "\n";
    }
};

int main()
{
    EvenValues Eobj(0, 10);
    Eobj.Even();

    return 0;
}

/*
OUTPUT
Even numbers using while loop:
0
2
4
6
8
10
*/