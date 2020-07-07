#include <iostream>
#include<cstring>

using namespace std;

void SelectionSort(int a[], int n){

    for(int i = 0; i < n-2; i++){

        int smallest = INT_MAX;

            for(int j = i+1; j < n-1; j++){
                if(a[j] < smallest){
                    smallest = a[j];
                }
            }

            if(a[i] > smallest){
                swap(a[i], smallest);
            }
    }

}


int main()
{

    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    SelectionSort(a,n);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

}
