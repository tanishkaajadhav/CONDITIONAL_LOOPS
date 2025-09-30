// Print hello world 

#include <iostream>
using namespace std;

class HelloWorld
{
private:
    int n;

public:
    void input()
    {
        cout << "Enter how many times to print Hello, World!: ";
        cin >> n;
    }

    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "(" << i << ") Hello, World!\n";
        }
    }
};

int main()
{
    HelloWorld obj;
    obj.input();
    obj.display();
    return 0;
}

/*
OUTPUT
Enter how many times to print Hello, World!: 4
(1) Hello, World!
(2) Hello, World!
(3) Hello, World!
(4) Hello, World!
*/