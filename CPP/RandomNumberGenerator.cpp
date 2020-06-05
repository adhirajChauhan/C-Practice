#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    for(int i = 1; i <= 10; i++)
    {
        cout <<  1+(rand()%6) << endl;
    }
}
