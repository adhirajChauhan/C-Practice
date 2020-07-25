#include <iostream>
#include<string>
using namespace std;

class Hash{
private:
    int tableSize;

public:
    Hash(){
        tableSize = 100;
    };
    int hash(string key){
        int hash = 0;
        int index;

        for(int i = 0; i < key.length(); i++){
            hash += (int)key[i];
            cout << "hash : " << hash << endl;

        }

        index = hash % tableSize;

        return index;
    }

};

int main()
{
    int index;
    Hash hashobj;
    index = hashobj.hash("Paul");

    cout << "Index = " << index << endl;

    return 0;
}
