#include <iostream>
#include<string>

using namespace std;

void printArray(int myArray[], int sizeOfArray);

int main()
{
    int a[3] = {33,5,44};
    int b[4] = {2,5,68,90};

    printArray(a, 3);


}

void printArray(int myArray[], int sizeOfArray){
    for(int x = 0; x < sizeOfArray; x++){
    cout << myArray[x] << endl;
    }

}
