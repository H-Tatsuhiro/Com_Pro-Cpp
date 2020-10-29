#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;  cin >> n;
    pair<int, int> p = make_pair(0, 0);
    int t = 0;
    for (int i = 0; i < n; i++) {
        int a, b, c; cin >> a >> b >> c;
        long long int sum = b + c, sum_p = p.first + p.second;

        if (abs(sum - sum_p) % 2 != 0) {
            if (!(a - t >= abs(sum - sum_p) && (a - t) % 2 != 0)) {
                cout << "No" << endl;
                return 0;
            }
        }
        else if (abs(sum - sum_p) % 2 == 0) {
            if (!(a - t >= abs(sum - sum_p) && (a - t) % 2 == 0)) {
                cout << "No" << endl;
                return 0;
            }
        }

        t = a;
        p = make_pair(b, c);
    }
    cout << "Yes" << endl;
    return 0;
}
