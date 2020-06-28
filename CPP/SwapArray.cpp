#include <iostream>
using namespace std;


int main()
{
    cout << "Enter two numbers to swap" << endl;
    int a, b;
    cin >> a>>b;
    cout  << "Before Swapping" << endl;
    cout <<"First number : " << a << endl;
    cout << "Second number : " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After Swapping" << endl;
    cout <<"First number : " << a << endl;
    cout << "Second number : " << b << endl;
}
