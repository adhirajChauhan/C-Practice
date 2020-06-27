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

    int largest = INT_MIN;
    for(int i = 0; i < n; i++){
            if(a[i] > largest){
                    largest = a[i];
            }

    }
    cout << "Largest : " << largest << endl;



}
