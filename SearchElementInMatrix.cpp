#include <bits/stdc++.h>
using namespace std;

int searchMatrix(vector<vector<int> > &A, int B) {
    int n = A.size();
    int m = A[0].size();
    int lb = 0, ub = n * m - 1;
    int mid;
    int i, j;
    while (ub >= lb) {
        mid = (lb + ub) / 2;
        j = mid % m;
        i = mid / m;
        if (A[i][j] == B) return 1;
        else if (A[i][j] < B) lb = mid + 1;
        else if (A[i][j] > B) ub = mid - 1;
    }
    return 0;
}


int main () {
    vector<vector<int> > A {{1, 2, 3}, {4, 5, 6}};
    // for (int i = 0; i < 7; i++) {

    // }
    int B = 6;
    cout << searchMatrix(A, B) << "\n";
}