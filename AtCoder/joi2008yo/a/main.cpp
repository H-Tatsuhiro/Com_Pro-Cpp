#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a; cin >> a;
    a = 1000 - a;
    int cnt = 0;
    while (a >= 500) {
        a -= 500, cnt++;
    }
    while (a >= 100) {
        a -= 100, cnt++;
    }
    while (a >= 50) {
        a -= 50, cnt++;
    }
    while (a >= 10) {
        a -= 10, cnt++;
    }
    while (a >= 5) {
        a -= 5, cnt++;
    }
    while (a >= 1) {
        a--, cnt++;
    }
    cout << cnt << endl;
}
