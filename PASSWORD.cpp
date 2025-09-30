// Code to check if entered password is correct or incorrect

#include <iostream>
#include <string>
using namespace std;

class PasswordCheck
{
private:
    string password;

public:
    PasswordCheck()
    {
        password = "User@123";
    }

    void validate()
    {
        string input;
        cout << "Enter the password: ";
        cin >> input;

        if (input == password)
        {
            cout << "The entered password is correct.\n";
        }
        else
        {
            cout << "The entered password is incorrect!\n";
        }
    }
};

int main()
{
    PasswordCheck obj;
    obj.validate();
    return 0;
}

/*
OUTPUT
Testcase 1 :
Enter the password: User@123
The entered password is correct.

Testcase 2 : 
Enter the password: user123
The entered password is incorrect!


*/