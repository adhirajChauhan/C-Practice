#include <iostream>

using namespace std;

bool isSorted(int a[], int n){

    if(n == 0 || n == 1){
        return true;
    }

    if (a[0] > a[1]){
        return false;
    }

    int smallSorted = isSorted(a+1, n-1);

    if(smallSorted){
        return true;
    } else{
        return false;
    }
}



int main()
{

    int a[] = {1,2,3,4,5};

    if(isSorted(a,5)){
        cout << "Sorted" << endl;
    } else {
        cout << "Not Sorted" << endl;
    }


}
