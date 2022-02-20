#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n; cin >> n;
    set<int> S;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        S.insert(a);
    }
    cout << S.size() << endl;
}
