#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, x {}, y {};
    cin >> n;
    // cout << n;
    int A[n];
    for (int i = 0; i<n; i++) {
        int inp;
        cin >> A[i];
 //       A.push_back(inp);
    }
    stack<int> stack1;
    stack<int> stack2;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<i; j++) {
            if (A[j] > A[i]) {
                stack1.push(A[j]);
            } else if (stack1.empty()){
                x = -1;
            } else {
                x = stack1.top();
            }
            if (A[j] < A[i]) {
                stack2.push(A[j]);
            } else if(stack2.empty()) {
                y = -1;
            } else{
                 y = stack2.top();
            }
            
        }
        cout << (x + y) << " ";
    }
}