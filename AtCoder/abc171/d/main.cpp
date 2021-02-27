#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_map<int, long long int> Map;
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        Map[a]++, sum += a;
    }
    long long int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int b, c; cin >> b >> c;
        sum -= Map[b] * b, sum += c * Map[b];
        Map[c] += Map[b], Map[b] = 0;
        cout << sum << endl;
    }
}
