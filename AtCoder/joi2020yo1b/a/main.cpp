#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> A(3, 0); cin >> A[0] >> A[1] >> A[2];
    sort(A.begin(), A.end());
    cout << A[1] + A[2] << endl;
}
