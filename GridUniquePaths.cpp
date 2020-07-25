#include <bits/stdc++.h>
using namespace std;

long factorial (int f) {
    if (f == 0) return 1;
    long fact = 1;
    for (int i = f; i >= 1; i--) {
        fact *= i;
    }
    return fact;
}

int uniquePaths(int A, int B) {
    long upper = 1;
    int maxi = max(A - 1, B - 1);
    int mini = min(A - 1, B - 1);
    for (int i = maxi + mini; i > maxi; i--){
        upper *= i;
    }
    return upper / factorial(mini);
    
}


int main () {
    cout << uniquePaths(15, 9) << "\n";
    return 0;
}
