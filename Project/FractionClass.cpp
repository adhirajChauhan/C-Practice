#include <iostream>
#include <cstring>

using namespace std;

class Fraction{
private:
    int num;
    int dem;

public:
    Fraction(int num, int dem){
        this->num = num;
        this->dem = dem;
    }

    void Print(){
        cout << this->num << " / " << this -> dem << endl;
    }

    void Add(Fraction f2){
        int lcm = dem * f2.dem;
        int x = lcm/this->dem;
        int y = lcm/f2.dem;
        int number = x*num + y*f2.num;

        ///Store result in f1
        this->num = number;
        this->dem = lcm;

        Simplify();
    }

    void Simplify(){
        int hcf = 1;
        int j = min(this->num,this->dem);
        for(int i = 1; i <=j; i++){
            if(num%i == 0 && dem%i == 0){
                hcf = i;
            }

        }

    ///Simplify
    num = num/hcf;
    dem = dem/hcf;
    }
};


int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);

    f1.Add(f2);
    f1.Print();
    f2.Print();

}
