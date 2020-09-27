#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> A(n, 0);
    for (int i = 0; i < n; i++) cin >> A[i];
    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());
    int sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += A[i];
    }
    cout << sum << endl;
}
