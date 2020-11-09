#include <iostream>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int cnt = 0;
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) {
        int a; cin >> a; Map[a]++;
    }
    for (int i = 1; i <= 100000; i++) if (Map[i] > 1) cnt += Map[i] - 1;
    cout << cnt << endl;
}
