#include <iostream>
#include <cstring>
using namespace std;


int main() {

    char arr[20];
    char temp[20];
    int count = 0;
    int l,i,j;

    cout << "Enter a String : " << endl;
    cin >> arr;

    l = strlen(arr);


    for(int i = 0; i < l; i++ ){
        for(int j = 0; j < count; j++){
            if(temp[j] == arr[i]){
                break;

            }
        }
        if(count == j){
            temp[count] = arr[i];
            count++;

        }




    }
       for(i = 0; i < count; i++){
        cout << temp[i] << endl;
    }


}
