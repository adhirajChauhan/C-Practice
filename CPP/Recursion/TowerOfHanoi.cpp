#include <iostream>

using namespace std;

int toh(int n){

    if(n == 0){
        return 0;
    }

    return toh(n-1) + 1 + toh(n-1);
}

void printSteps(int n, char source, char destination, char helper){
    if(n == 0){
        return;
    }

    printSteps(n-1, source, helper, destination);
    cout << "Moving disk " << n << " from " << source << " -> " << destination << endl;
    printSteps(n-1, helper, source, destination);

}

int main()
{
    int n;
    cout << "Enter number of steps : " ;
    cin >> n;
    cout << "It will require " << toh(n) << " steps." << endl;

    printSteps(n,'A', 'B', 'C');
}
