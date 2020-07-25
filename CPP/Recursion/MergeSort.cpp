#include <iostream>

using namespace std;

void MergeArrays(int a[], int x[], int y[], int s, int e)
{
    int mid = (s+e)/2;
    ///Take 3 var, i to iterate over x, j to iterate over y, k to iterate over a
    int i = s;
    int j = mid + 1;
    int k = s;

    ///Loop will work until i is < than mid and j  < end

    while(i <= mid && j <= e){
        if(x[i] < y[j]){
            a[k] = x[i];
            i++;
            k++;
        } else{
            a[k] = y[j];
            j++;
            k++;
        }
    }
    ///If some element left from any smaller array, we need to copy that also

    while(i<= mid){
        a[k] = x[i];
        i++;
        k++;
    }

    while(j <= e){
        a[k] = y[j];
        j++;
        k++;
    }
}

void MergeSort(int a[], int s, int e)
{
    if(s >= e){
        return;
    }

    int mid = (s+e)/2;
    int x[100], y[100];
    for(int i = 0; i <= mid; i++){
        x[i] = a[i];
    }

    for(int i = mid+1; i <= e; i++){
        y[i] = a[i];
    }

    MergeSort(x, s, mid);
    MergeSort(y,mid+1,e);
    MergeArrays(a,x,y,s,e);

}


int main()
{
    int a[] = {3,8,4,5,1,2};

    MergeSort(a,0,5);

    for(int i = 0; i < 6; i++){
        cout << a[i] << " ";
    }
}
