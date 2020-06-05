#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int a;
    int p = 500;
    int r = .02;

    for(int i = 1; i < 10; i++ )
    {
        a = p * pow(i + r, i);
        cout << i << "----------" << a << endl;
    }

    return 0;
}
