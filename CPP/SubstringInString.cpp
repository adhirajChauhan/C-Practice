#include <iostream>
#include<string>

using namespace std;

int subString(string s1, string s2){
    int m = s1.length(); //s1 is the smaller string
    int n = s2.length(); //s2 is the main string

    for (int i = 0; i <= n - m; i++) {
        int j;

        for (j = 0; j < m; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == m)
            return i;
    }
    return -1;
}

int main()
{
    string s1 = "abb";
    string s2 = "aabbabababbbaabb";
    int result = subString(s1,s2);
    if(result == -1)
        cout << "Not found" << endl;
    else
        cout << "Match Found at : " << result << endl;


}
