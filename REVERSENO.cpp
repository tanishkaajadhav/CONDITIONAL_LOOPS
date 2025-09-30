// Print the sequence of numbers in reverse

#include <iostream>
using namespace std;

class NumberReverse
{
private:
    int num;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void reverse()
    {
        int rev = 0, temp = num;
        while (temp != 0)
        {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        cout << rev << "\n";
    }
};

int main()
{
    NumberReverse obj;
    obj.input();
    obj.reverse();
    return 0;
}

/*
OUTPUT
Testcase 1 :
Enter a number: 873645
546378

*/