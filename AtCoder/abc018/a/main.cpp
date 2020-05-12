#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    vector<int> A(3, 0);
    vector<int> B(3, 0);
    for (int i = 0; i < 3; ++i) {
        int x = 0;
        cin >> x;
        A[i] = x; B[i] = x;
    }
    sort(B.begin(), B.end(), greater<int>());
    for (int j = 0; j < 3; ++j) {
        for (int i = 0; i < 3; ++i) {
            if (A[j] == B[i]) cout << i + 1 << endl;
        }
    }
}
