#include <iostream>
using namespace std;

void Print(int n){
    ///Base case
    if(n == 0){
        return;
    }

    Print(n-1);

    cout << n << " ";

}

void Print2(int n){
    ///Base case
    if(n == 0){
        return;
    }

    cout << n << " ";

    Print2(n-1);

}

int main(){
    Print(10);

    cout << endl;

    Print2(10);
}
