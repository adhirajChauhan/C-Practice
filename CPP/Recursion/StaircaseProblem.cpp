#include <iostream>

using namespace std;

int noOfWays(int n){

    if(n == 0 || n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }

    return noOfWays(n-1) + noOfWays(n-2) + noOfWays(n-3);
}


int main()
{
    int n;
    cin >> n;
    cout << noOfWays(n);
}
