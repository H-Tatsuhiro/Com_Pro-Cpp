#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string S;
    int N;
    cin >> S >> N;
    for (int i = 0; i < N; ++i) {
        int l = 0, r = 0;
        cin >> l >> r;
        l--; r--;
        for (int j = l, k = r; j < k; ++j, --k) {
            swap(S[j], S[k]);
        }
    }
    cout << S << endl;
}
