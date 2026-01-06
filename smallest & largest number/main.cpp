#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter number a: ";
    cin >> num1;
    cout << "Enter number b: ";
    cin >> num2;
    cout << "Enter number c: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "Number a is largest: " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Number b is largest: "<<num2 << endl;
    }
    else
    {
        cout << "Number c is largest: "<<num3 << endl;
    }

    if (num1 < num2 && num1 < num3)
    {
        cout << "Number a is smallest: "<< num1 << endl;
    }
    else if (num2 < num1 && num2 < num3)
    {
        cout << "Number b is smallest: "<< num2 << endl;
    }
    else
    {
        cout << "Number c is smallest: "<<num3;
    }
}
