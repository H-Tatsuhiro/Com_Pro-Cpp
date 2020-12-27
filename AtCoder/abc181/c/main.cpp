#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<long double, long double>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (v[i].first == v[j].first) {
                    if (v[i].first == v[k].first) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
                else if (v[i].second == v[j].second) {
                    if (v[i].second == v[k].second) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
                else {
                    long double a = (v[i].second - v[j].second) / (v[i].first - v[j].first);
                    long double b = v[i].second - a * v[i].first;
                    if (a * v[k].first + b == v[k].second) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
