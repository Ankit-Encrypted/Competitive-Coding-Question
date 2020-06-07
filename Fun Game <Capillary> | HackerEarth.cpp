#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    int top = -1;
    vector<int> vec;

    void push(int value) {
        top++;
        vec.push_back(value);
    }

    void pop() {
        if (top == -1) {
            cout << "underflow" << endl;
        } else {
            top --;
        }
    }

    int top_ele() {
        return vec[top];
    }

};

int main() {
    int n;
    cin >> n;
    Stack A;
    Stack B;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        B.push(val);
    }
    for (int i = 0; i < n; i++) {
       int val2 = B.vec[n-i-1];
       A.push(val2);

    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << A.vec[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << B.vec[i] << " ";
    // }
    // cout << "\n";
    // cout << A.top << endl;
    // cout << B.top << endl;

    
    while (true) {
        if (A.top == -1 || B.top == -1) {
            break;
        } else if (A.top_ele() > B.top_ele()) {
            cout << "1" << " ";
            B.pop();
        } else if (A.top_ele() < B.top_ele()) {
            cout << "2" << " ";
            A.pop();
        } else {
            cout << "0" << " ";
            A.pop();
            B.pop();
        }
    }
    return 0;
}