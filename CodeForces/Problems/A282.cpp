#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int x = 0;

    string op;
    while(n--){
        cin >> op;

        if(op == "++X" || op == "X++" || op == "x++" || op == "x++"){
            x++;
        } else if(op == "--X" || op == "X--" || op == "--x" || op == "x--"){
            x--;
        }
    }

    cout << x << endl;

    return 0;
}