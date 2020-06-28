#include <iostream>
#include<cstring>

using namespace std;

bool strcompare(char str1[], char str2[]){
    if(strlen(str1) != strlen(str2)){
        return false;
    }
    for(int i = 0; i < strlen(str1); i++){
        if(str1[i] != str2[i]) return false;
    }
        return true;
}


int main()
{

    char str1[100];
    char str2[100];
    cout << "Enter string 1 : " << endl;
    cin >> str1;
    cout << "Enter string 2 : " << endl;
    cin >> str2;

    if(strcompare(str1,str2)){
            cout << "Equal" << endl;
    }
    else{
        cout << "Not Equal" << endl;
    }

}
