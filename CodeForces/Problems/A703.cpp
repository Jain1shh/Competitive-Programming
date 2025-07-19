#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;

    cin >> n;

    int Mishka = 0, Chris = 0;
    for(int i = 0; i < n; i++){
        int a = 0, b = 0;
        cin >> a >> b;
        if(a > b) Mishka++;
        else if(b > a) Chris++;
    }

    if(Mishka > Chris) cout << "Mishka\n";
    else if(Chris > Mishka) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";

    return 0;
}