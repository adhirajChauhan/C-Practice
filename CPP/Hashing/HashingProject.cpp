#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdio>
using namespace std;

const int tableSize = 100;

class HashTableEntry {
   public:
      int k;
      int v;
      HashTableEntry(int k, int v) {
         this->k= k;
         this->v = v;
      }
};

class hashMapTable {
private:
    HashTableEntry **t;

public:
    hashMapTable(){

        t = new HashTableEntry * [tableSize];

        for(int i = 0; i < tableSize; i++){
            t[i] = NULL;
        }
    }

    int hashFunc (int k){
        return k % tableSize;
    }

};
