// Print even values between 0 and 10 (Using for loop)

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
        cout << "Even numbers using for loop: \n";
        for (int iCnt = start; iCnt <= end; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                cout << iCnt << " \n";
            }
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
Even numbers using for loop:
0
2
4
6
8
10
*/