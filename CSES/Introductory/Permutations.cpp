#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a;

    for(int i = 1; i <= n; i+=2){
        a.emplace_back(i);
    }
    for(int i = 2; i <= n; i+=2){
        a.emplace_back(i);
    }

    if(n == 4){
        a = {3, 1, 4, 2};
    }

    for(int i = 0; i < (int) a.size() - 1; i++){
        if(abs(a[i] - a[i + 1]) == 1){
            cout << "NO SOLUTION\n";
            return 0;
        }
    }

    for(auto x : a){
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}