#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
int main() {
    int q; cin >> q;
    deque<int> que;
    for (int i = 0; i < q; i++) {
        int t, x; cin >> t >> x;
        if (t == 1) que.push_front(x);
        else if (t == 2) que.push_back(x);
        else cout << *(que.begin() + x - 1) << endl;
    }
}
