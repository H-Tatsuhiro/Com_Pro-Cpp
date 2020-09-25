#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, cnt = 0; cin >> N;
    for (int i = 0; i < N; i++) {
        int a; cin >> a;
        if (a % 2 != 0) cnt++;
    }
    if (cnt % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
