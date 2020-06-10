#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; string S; cin >> N >> S;
    int M = S.length();
    vector<char> C(52, '0');
    for (int i = 0; i < 26; ++i) {
        C[i] = (char)i + 65;
    }
    for (int i = 0; i < 26; ++i) {
        C[i + 26] = (char)i + 65;
    }

    for (int i = 0; i < M; ++i) {
        int x = (char)S[i] - 65;
        S[i] = C[x + N];
    }
    cout << S << endl;
}
