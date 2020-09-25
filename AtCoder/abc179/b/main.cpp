#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        if (x == y) cnt++;
        else cnt = 0;
        if (cnt == 3) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
