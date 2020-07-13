#include <iostream>

using namespace std;

int firstPresent(int a[], int n, int x, int i){

    if(i == n){
        return -1;
    }

    if(a[i] == x){
        return i;
    }

    return firstPresent(a,n,x,i+1);


}

int main()
{

    int a[] = {1,4,3,4,5};

    cout << firstPresent(a,5,3,0);
}
