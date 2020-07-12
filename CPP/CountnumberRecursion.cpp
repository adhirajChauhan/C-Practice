#include <iostream>

using namespace std;

int count(int n){
    ///Base case
    if(n == 0){
        return 0;
    }

    ///Recursive case
    int output = count(n/10);

    return output + 1;
}

int main()
{

    cout << count(5765);

}
