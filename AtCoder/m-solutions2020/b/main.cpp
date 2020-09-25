#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int A, B, C, K; cin >> A >> B >> C >> K;
    int cnt = 0;
    if (A >= B) {
        while (A >= B) { B *= 2; cnt++; }
    }
    if (B >= C) {
        while (B >= C) { C *= 2; cnt++; }
    }
    if (cnt <= K) cout << "Yes" << endl;
    else cout << "No" << endl;
}
