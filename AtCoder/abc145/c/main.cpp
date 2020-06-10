#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
int N;
long double ans = 0;
void permutation(vector<int> perm, vector<long double> &X, vector<long double> &Y) {
    int S = perm.size();
    do {
        for (int i = 0; i < S - 1; ++i) {
            ans += sqrt(powl(X[perm[i] - 1] - X[perm[i + 1] - 1], 2.0) + powl(Y[perm[i] - 1] - Y[perm[i + 1] - 1], 2.0));
        }
    } while (next_permutation(perm.begin(), perm.end()));
    return ;
}
int main() {
    cin >> N;
    vector<long double> X(N, 0);
    vector<long double> Y(N, 0);
    vector<int> vec(N, 0);
    long double MX = 1.0;
    for (int i = 1; i <= N; ++i) {
        MX *= i;
        vec[i - 1] = i;
    }
    for (int i = 0; i < N; ++i) {
        cin >> X[i] >> Y[i];
    }
    permutation(vec, X, Y);
    cout << fixed << setprecision(10) << ans / MX << endl;
}
