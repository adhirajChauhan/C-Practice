#include <iostream>

using namespace std;

void printPrefix(char str1[]){
    for(int e = 0; str1[e] != '\0'; e++){
        for(int s = 0; s <= e; s++){
                cout << str1[s];

        }
        cout << endl;
    }
}


int main()
{
    char str1[] = "abcd";
    printPrefix(str1);

}
