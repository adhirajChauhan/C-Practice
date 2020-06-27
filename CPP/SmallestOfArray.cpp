#include <iostream>
#include<string>

using namespace std;


int main()
{
    cout << "Enter the numbers" << endl;
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int smallest = INT_MAX;
    for(int i = 0; i < n; i++){
            if(a[i] < smallest){
                    smallest = a[i];
            }

    }
    cout << "Smallest : " << smallest << endl;



}
