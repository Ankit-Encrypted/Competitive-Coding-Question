#include <bits/stdc++.h>
using namespace std;



int main () {
    //code
    // double a = log2(169078009);
    // // cout << a << "\n";
    // // cout << a / 2 << "\n";
    // cout << pow(2, 0.5 * log2(169078009)) << "\n";
    int A = 169078006;
    double power = 0.5 * log2(A);
    double b = pow(10, 0.5 * log10(A));
    cout << b << "\n";
    cout << floor(b) << "\n";
    // cout << sqrt(A) << "\n";
    // cout << floor(sqrt(A)) << "\n";
    double c = 5.999999;
    int d = c;
    cout << d << "\n";
}
