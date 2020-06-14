#include <iostream>
using namespace std;

int minMax(int arr[], int len, int *min, int *max){
    *min = *max = arr[0];
    int i = 0;
    for(i = 1; i < len; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
        if(arr[i] < *min){
            *min = arr[i];
        }

    }
}

int main()
{
    int a[] = {2,13,65,7,23,45,66,30,95,12};
    int min, max;
    int len = sizeof(a)/sizeof(a[0]);
    minMax(a, len, &min, &max);
    cout << "Max is :" << max << " " << "Min is : " << min;
}
