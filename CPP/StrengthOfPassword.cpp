#include <iostream>
using namespace std;

void PassStrength(string& input){

    int n = input.length();

    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool specialChar = false;

    string normalChar = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for(int i = 0; i < n; i++){

        if(islower(input[i])){
            hasLower = true;
        }

        if(isupper(input[i])){
        hasUpper = true;
        }

        if(isdigit(input[i])){
        hasDigit = true;
        }

        size_t special = input.find_first_not_of(normalChar);
        if (special != string::npos)
        specialChar = true;

    }

cout << "Strength of Password - ";

if(hasLower && hasUpper && hasDigit && specialChar && (n >= 8)){
    cout << "Strong" << endl;
}

else if((hasLower || hasUpper) && specialChar && (n >= 6)){
    cout << "Medium" << endl;
}

else{
    cout << "Weak" << endl;
}

}



int main() {
  string input = "don't@12";
  PassStrength(input);
}
