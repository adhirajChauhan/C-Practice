#include <iostream>

using namespace std;

int pow(int x, int n){

    ///Base case
    if(n == 0){
        return 1;
    }

    ///Recursive case
    int smallOutput = pow(x,n-1);

    ///Calculation
    return x*smallOutput;

}

int main()
{

    cout << pow(5,5);

}
