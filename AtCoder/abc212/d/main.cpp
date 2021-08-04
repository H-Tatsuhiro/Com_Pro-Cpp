#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int q; cin >> q;
    priority_queue<long long int, vector<long long int>, greater<long long int>> que;
    for (int i = 0; i < q; i++) {
        int p; cin >> p;
        if (p == 1) {
            long long int x; cin >> x;
            x -= sum;
            que.push(x);
        }
        else if (p == 2) {
            int x; cin >> x;
            sum += x;
        }
        else {
            cout << que.top() + sum << endl;
            que.pop();
        }
    }
}
