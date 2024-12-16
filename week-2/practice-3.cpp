#include <iostream>
using namespace std;

int main (){

    int a = 5;
    int b = 6;

    cout << "a = " << a << " \nb = " << b << endl;
    if (a == b)
    {
        cout << "a is equal to b" << endl;

    }
    else 
    {
        cout << "a is not equal to b" << endl;

    }

    if (a < b)
    {
        cout << "a is less than b" << endl;
    }
    else
    {
        cout << " a is not less than b" << endl;
    }

    if (a > b)
    {
        cout << "a is greater than b" << endl;

    }
    else 
    {
        cout << "a is not greater than b" << endl ;

    }

    if (a <= b)
    {
        cout << "a is less than or equal to b" << endl;
    }
    else if (b >= a)
    {
        cout << " b is greater than or equal to a " << endl;

    }

    return 0;

}