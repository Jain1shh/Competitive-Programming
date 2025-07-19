#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int Anton = 0, Danik = 0;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        if(c == 'A') Anton++;
        else if(c == 'D') Danik++;
    }

    if(Anton > Danik) cout << "Anton\n";
    else if(Danik > Anton) cout << "Danik\n";
    else cout << "Friendship\n";
    
    return 0;
}