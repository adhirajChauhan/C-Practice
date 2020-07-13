#include <iostream>

using namespace std;

int lastPresent(int a[], int n, int x, int i){

    if(i == -1){
        return -1;
    }

    if(a[i] == x){
        return i;
    }

    return lastPresent(a,n,x,i-1);


}

int main()
{

    int a[] = {1,4,3,4,5};

    cout << lastPresent(a,5,4,4);
}
