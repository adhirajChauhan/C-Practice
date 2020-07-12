#include <iostream>

using namespace std;

int sum(int n){
    ///Base case
    if(n == 0){
        return 0;
    }

    ///Recursive case
    int output = sum(n/10);

    int last_digit = n % 10;
    return output + last_digit;
}

int main()
{

    cout << sum(11111);

}
