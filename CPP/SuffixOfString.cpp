#include <iostream>
#include <cstring>

using namespace std;

void printSuffix(char str1[]){
    int e;
    int length = strlen(str1);
    for(e <= length; e = 0; e--){

        for(int s = 0; s <= e; s--){
                cout << str1[s];

        }

        cout << endl;
    }
    cout << "A";
}


int main()
{
    char str1[] = "abcd";
    printSuffix(str1);

}
