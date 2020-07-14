#include <iostream>

using namespace std;

void printArr(char a[]){

    if(a[0] == '\0'){
        return;
    }

    cout << a[0];
    printArr(a + 1);
}


void printArr2(char a[]){

    if(a[0] == '\0'){
        return;
    }
    printArr(a + 1);
    cout << a[0];

}

int main()
{
    char a[] = "Hello";
    printArr2(a);
}
