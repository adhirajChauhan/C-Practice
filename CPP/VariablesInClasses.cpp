#include <iostream>
#include<string>

using namespace std;

class myClass{
public:
    void setName(string x){
        name = x;
    }

    string getname(){
        return name;
    }

private:
    string name;

};


int main()
{
    myClass c;
    c.setName("My name is blah");
    cout << c.getname();

    return 0;
}
