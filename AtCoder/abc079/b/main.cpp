#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    unsigned long long int N; cin >> N;
    vector<unsigned long long int> L(N + 1, 0);
    L[0] = 2, L[1] = 1;
    for (int i = 2; i <= N; ++i) L[i] = L[i - 1] + L[i - 2];
    cout << L[N] << endl;
}
