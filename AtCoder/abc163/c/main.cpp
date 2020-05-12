#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> cnt(N, 0);
    for (int i = 1; i < N; ++i) {
        int a = 0;
        cin >> a;
        cnt[a - 1]++;
    }
    for (int i = 0; i < N; ++i) {
        cout << cnt[i] << endl;
    }
}
