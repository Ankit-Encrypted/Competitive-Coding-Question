#include <bits/stdc++.h>
using namespace std;




int main () {
    //code
    vector<int> B;
    B.push_back(10);
    B.push_back(20);
    B.push_back(30);
    B.push_back(140);
    B.push_back(105);
    B.push_back(103);
    B.push_back(11);

    int max = *max_element(B.begin(), B.end());
    int max_index = distance(B.begin(), max_element(B.begin(), B.end())) + 1;
    cout << max << "\n";
    cout << max_index << "\n";
    int n = B.size();
    vector<int> C;
    for (int i = 1; i < n - 1; i++) {
        C.push_back(B[i]);
    } 

    
    cout << 
}
