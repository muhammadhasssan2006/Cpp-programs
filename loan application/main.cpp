#include <iostream>
using namespace std;

int main()
{
    int age, salary;
    cout << "enter your age: ";
    cin >> age;

    if (age >= 21)
    {
        cout << "enter your monthly salary: ";
        cin >> salary;
        if (salary >= 50000)
        {
            cout << "Loan approved!";
        }
        else
        {
            cout << "Loan Rejected due to Insufficient Salary";
        }
    }
    else
    {
        cout << "loan cancelled due to age";
    }
    return 0;
}

