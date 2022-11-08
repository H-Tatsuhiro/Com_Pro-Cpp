#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    set<int> S;
    for (int i = 0; i < 5; i++) {
        int a; cin >> a, S.insert(a);
    }
    cout << S.size() << endl;
}
