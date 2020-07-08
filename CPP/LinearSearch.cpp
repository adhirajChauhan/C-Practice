#include <iostream>
#include<cstring>

using namespace std;

int LinearSearch(int a[], int n, int key){

    for(int i = 0; i < n; i++){

        if(a[i] == key){
            return i;

        }
    }
    return -1;
}

int main()
{
    cout << "Enter length of array ";
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
            cout << "Enter element : ";
            cin >> a[i];
    }

    cout << "Enter the key : ";
    int key;
    cin >> key;

    int pos = LinearSearch(a, n, key);
    if(pos == -1){
        cout << "Key not found" << endl;
    }
    else{
        cout << "Key found at index " << pos << endl;
    }


}
