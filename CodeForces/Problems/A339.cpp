#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    vector<char> digits;

    for(int i = 0; i < s.length(); i++){
        if(s[i] != '+'){
            digits.emplace_back(s[i]);
        }
    }

    sort(digits.begin(), digits.end());

    for(int i = 0; i < (int) digits.size(); i++){
        cout << digits[i];

        if(i != digits.size() - 1){
            cout << '+';
        }

    }
    return 0;
}