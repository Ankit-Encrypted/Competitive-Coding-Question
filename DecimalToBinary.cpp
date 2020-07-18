#include <bits/stdc++.h>
using namespace std;

int main () {
    int A = 6;
    cout << A << "\n";
    int next = A, current;
    vector<int> B;
    while (true) {
        next = next / 2;
        current = next % 2;
        B.insert(B.begin(), current);
        if (next == 0) break;
        
    }
    int n = B.size();
    string num = "";    
    for (int i = 0; i < n; i++) {
        num += to_string(B[i]);
        // cout << B[i] << " ";
    }
    cout << num << "\n";
    return 0;
}