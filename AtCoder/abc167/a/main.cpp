#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string S, T;
    cin >> S >> T;
    int N = S.length();
    string F;
    for (int i = 0; i < N; ++i) {
        F += T[i];
    }
    if (S == F) cout << "Yes" << endl;
    else cout << "No" << endl;
}
