#include <iostream>

using namespace std;

int countZeros(int n){
    ///Base case
    if(n == 0){
        return 0;
    }

    ///Recursive case
    int output = countZeros(n/10);

    int last_digit = n % 10;
    if(last_digit == 0){
        return output + 1;
    } else{
        return output;
    }
}

int main()
{

    cout << countZeros(1023000054);

}
