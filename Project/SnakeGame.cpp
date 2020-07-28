#include <iostream>
#include<cstdlib>
#include<stdlib.h>
#include<ctime>
using namespace std;

bool isGameOver;
const int width = 20;
const int height = 20;
int headX, headY, fruitX, fruitY, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup(){
    isGameOver = false;
    dir = STOP;

    headX = width / 2;
    headY = height / 2;

    fruitX = rand() % width;
    fruitY = rand() % height;

    score = 0;
}


void GameLogicUpdate(){

}

void Draw(){
    system("CLS");
    ///Upper Wall
    for(int i = 0; i < width + 2; i++){
        cout << "#";
    }
    cout << endl;

    ///Side Walls

    for(int i = 0; i < height; i++){

        for(int j = 0; j <= width; j++)
        {
            if(j == 0)
                cout << "#";

            if(i == headY && j == headX)
                cout << "O";

            else if(i == fruitY && j == fruitX)
                cout << "F";

            else
                cout << " ";



            if(j == width - 1){
                cout << "#";
            }
        }
        cout << endl;

    }




    ///Lower Wall
    for(int i = 0; i < width + 2; i++){
    cout << "#";
    }
    cout << endl;
}

void Input(){

}


int main()
{

	while(!isGameOver){
		GameLogicUpdate();
		Draw();
		Input();
		Setup();


}
