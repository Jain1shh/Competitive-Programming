#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;

    long inputSum = 0;

    for(int i = 0; i < n - 1; i++){
        int x;
        cin >> x;
        inputSum += x;
    }

    long sum = n * (n + 1) / 2;

    cout << sum - inputSum << endl;
    
    return 0;
}