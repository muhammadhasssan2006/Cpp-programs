#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter any number for table";
    cin >> num;
    // table using foor loop
    // for(int i=1; i <= 10; i++){
    //     cout<<num*i<<endl;
    // }

    // table of even numbers

    for (int i = 1; i <= 10; i++)
    {

        if (i % 2 == 0)
        {
            cout << num * i << endl;
        }
    }
}