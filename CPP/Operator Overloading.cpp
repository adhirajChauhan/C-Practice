#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
    string name;
    int age;

    string operator +(Player otherPlayer){
        return name + otherPlayer.name;
    }



};
int main() {

    Player player1;
    player1.name = "Adhiraj";

    Player player2;
    player2.name = "Singh";

    cout << player1 + player2 << endl;

    return 0;
}
