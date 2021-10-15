#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    vector<int> a(100000 * 9, -1);
    int head = 400000, tail = 400000;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') a[head - 1] = i + 1, head--;
        if (s[i] == 'R') a[tail] = i + 1, tail++;
        if (s[i] == 'A') {
            if (tail - head <= 0) cout << "ERROR" << endl;
            else {
                cout << a[head] << endl;
                head++;
            }
        }
        if (s[i] == 'B') {
            if (tail - head <= 1) cout << "ERROR" << endl;
            else {
                cout << a[head + 1] << endl;
                swap(a[head + 1], a[head]);
                head++;
            }
        }
        if (s[i] == 'C') {
            if (tail - head <= 2) cout << "ERROR" << endl;
            else {
                cout << a[head + 2] << endl;
                swap(a[head + 2], a[head + 1]);
                swap(a[head + 1], a[head]);
                head++;
            }
        }
        if (s[i] == 'D') {
            if (tail - head <= 0) cout << "ERROR" << endl;
            else {
                cout << a[tail - 1] << endl;
                tail--;
            }
        }
        if (s[i] == 'E') {
            if (tail - head <= 1) cout << "ERROR" << endl;
            else {
                cout << a[tail - 2] << endl;
                swap(a[tail - 2], a[tail - 1]);
                tail--;
            }
        }
        if (s[i] == 'F') {
            if (tail - head <= 2) cout << "ERROR" << endl;
            else {
                cout << a[tail - 3] << endl;
                swap(a[tail - 2], a[tail - 3]);
                swap(a[tail - 1], a[tail - 2]);
                tail--;
            }
        }
    }
}
