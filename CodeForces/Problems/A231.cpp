#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int res = 0;


    for(int i = 0; i < n; i++){
        int petya, vasya, tonya;

        cin >> petya >> vasya >> tonya;

        if(petya + vasya + tonya >= 2){
            res++;
        }
    }

    cout << res << endl;

    return 0;
}