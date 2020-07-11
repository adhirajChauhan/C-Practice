#include <iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int BinarySearch(int a[], int n, int key){
    int s = 0, e = n-1;

    while(s <= e){
        int mid = (s+e)/2;

        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
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

    sort(a, a+n);

    int pos = BinarySearch(a, n, key);
    if(pos == -1){
        cout << "Key not found" << endl;
    }
    else{
        cout << "Key found at index " << pos << endl;
    }


}
