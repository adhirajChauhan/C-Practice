#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    int sumAges = 0;
    int numberOfPeople = 0;

    cout << "Enter the age or -1 to quit" << endl;
    cin >> age;

    while(age != -1){
            sumAges = sumAges + age;
            numberOfPeople++;

            cout << "Enter next age to continue or -1 to quit" << endl;
            cin >> age;
    }

    cout << "Total sum of ages of the family is : " << sumAges << endl;
    cout << "Average age is : " << sumAges/numberOfPeople << endl;


    return 0;
}
