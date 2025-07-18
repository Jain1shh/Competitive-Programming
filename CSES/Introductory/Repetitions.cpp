#include<bits/stdc++.h>
using namespace std;

int main(){
    string DNA;
    cin >> DNA;

    int maxCount = 1, currentCount = 1;
    for (int i = 1; i < DNA.size(); i++) {
        if (DNA[i] == DNA[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }
        maxCount = max(maxCount, currentCount);
    }

    cout << maxCount << endl;
    return 0;

}