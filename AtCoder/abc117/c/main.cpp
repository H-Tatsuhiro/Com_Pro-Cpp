#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> x(m, 0);
    for (int i = 0; i < m; i++) cin >> x[i];
    vector<int> d;
    sort(x.begin(), x.end());
    for (int i = 0; i < m - 1; i++) d.push_back(abs(x[i] - x[i + 1]));
    sort(d.begin(), d.end()); reverse(d.begin(), d.end());
    long long int sum = 0;
    for (int i = n - 1; i < d.size(); i++) sum += d[i];
    cout << sum << endl;
}
