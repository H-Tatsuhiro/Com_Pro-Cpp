//
// Created by Tatsuhiro Hashimoto on 2020/05/04.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    int N = S.length();
    S[0] = toupper(S[0]);
    if (N != 1) {
        for (int i = 1; i < N; ++i) {
            S[i] = tolower(S[i]);
        }
    }
    cout << S << endl;
}

