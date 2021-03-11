#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int cnt = 0;
    vector<int> md = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = a; i <= c; i++) {
        int lim = -1, s = -1;
        if (i == c) lim = d - 1;
        else lim = md[i - 1];
        if (i == a) s = b;
        else s = 1;
        for (int j = s; j <= lim; j++) cnt++;
    }
    cout << cnt << endl;
}
