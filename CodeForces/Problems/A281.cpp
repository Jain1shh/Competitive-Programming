#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    if(!isupper(s[0])){
        s[0] = toupper(s[0]);
    }

    cout << s << "\n";
    return 0;
}