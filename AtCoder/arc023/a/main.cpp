#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
bool isUruu(int x) {
    if (x % 400 == 0) return true;
    else if (x % 100 != 0 && x % 4 == 0) return true;
    else return false;
}
int main() {
    int y, m, d; cin >> y >> m >> d;
    vector<int> day = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long long int sum = 0;
    for (int i = y; i <= 2013; i++) {
        if (isUruu(i)) day[2] = 29;
        else day[2] = 28;
        if (i == y) {
            sum += day[m] - d + 1;
            m++, d = 1;
            for (int j = m; j <= 12; j++) sum += day[j];
        }
        else {
            for (int j = 1; j <= 12; j++) sum += day[j];
        }
        if (i == 2013) y = 2014, m = 1, d = 1;
    }
    if (isUruu(y)) day[2] = 29;
    day[5] = 16;
    for (int i = m; i <= 5; i++) {
        for (int j = d; j <= day[i]; j++) {
            sum++;
            if (j == day[i]) d = 1;
        }
    }
    cout << sum << endl;
}
