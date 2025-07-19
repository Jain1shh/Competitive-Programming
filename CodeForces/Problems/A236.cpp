#include<bits/stdc++.h>
using namespace std;

int main(){
    string userName;
    cin >> userName;

    set<char> uniqueChars;

    for(char c : userName) {
        uniqueChars.insert(c);
    }

    if(uniqueChars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}