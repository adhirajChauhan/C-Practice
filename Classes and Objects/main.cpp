#include <iostream>

using namespace std;

class myClass{
    public:
    void myFunction(){
        cout << "This is my function" << endl;
    }


};

int main()
{
    myClass test;
    test.myFunction();

    return 0;
}
