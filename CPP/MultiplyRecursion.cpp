#include <iostream>

using namespace std;

int multiply(int m, int n){
    ///Base case
    if(n == 0){
        return 0;
    }

    ///Recursive case
    int output = multiply(m,n-1);


    return output + m;
}

int main()
{

    cout << multiply(5,10);

}
