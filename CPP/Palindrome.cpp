#include <iostream>
#include <cstring>
using namespace std;


int main() {

    char str[20];
    cout << "Enter a String : " << endl;
    cin >> str;

    int l, i;

    l = strlen(str);
    for(i = 0; i < l/2; i++){
        if(str[i] != str[l-1-i]){
            cout << "NO - Cannot be formed" << endl;
            break;

        }

    }
    if(i == l/2){
        cout << "YES - Can be formed" << endl;

    }


}
