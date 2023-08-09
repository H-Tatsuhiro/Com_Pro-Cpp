#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    unordered_map<int, bool> Map;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) if (!Map[i + 1]) Map[a[i]] = true;
    vector<int> k;
    for (int i = 0; i < n; i++) if (!Map[i + 1]) k.push_back(i + 1);
    cout << k.size() << endl;
    for (int i = 0; i < k.size(); i++) cout << k[i] << (i == k.size() - 1 ? '\n' : ' ');
}


