// Use a for loop to print "SIT" 5 times

#include <iostream>
using namespace std;

class PrintSIT
{
private:
    int icount;

public:
    PrintSIT(int c)
    {
        icount = c;
    }

    void Display()
    {
        for (int iCnt = 1; iCnt <= icount; iCnt++)
        {
            cout << "SIT \n";
        }
    }
};

int main()
{
    PrintSIT sobj(5);  
    sobj.Display();

    return 0;
}

/*
OUTPUT
SIT
SIT
SIT
SIT
SIT
*/