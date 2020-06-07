#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
void permutation(vector<string> &S, vector<int> perm, int n) {
    int k = 0;
    do {
        string str;
        for (int i = 0; i < n; ++i) {
            char c = (char)(perm[i] + 48);
            str += c;
        }
        S[k] = str;
        k++;
    } while (next_permutation(perm.begin(), perm.end()));
    return ;
}
int main() {
    int N; cin >> N;
    string P, Q;
    for (int i = 0; i < N; ++i) {
        char c;
        cin >> c;
        P += c;
    }
    for (int i = 0; i < N; ++i) {
        char c;
        cin >> c;
        Q += c;
    }
    int M = N;
    for (int i = N - 1; i > 1; --i) {
        M *= i;
    }
    vector<string> S(M, "");
    vector<int> p(N, 0);
    for (int i = 0; i < N; ++i) {
        p[i] = i + 1;
    }
    permutation(S, p, N);
    int a = -1, b = -1;
    for (int i = 0; i < M; ++i) {
        if (P == S[i]) {
            a = i + 1;
        }
        if (Q == S[i]) {
            b = i + 1;
        }
        if (a != -1 && b != -1) break;
    }
    printf("%d\n", abs(a - b));
}
