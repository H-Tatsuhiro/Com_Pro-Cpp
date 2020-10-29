#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, t; cin >> n >> t;
    long long int sum = 0, bef = 0;
    cin >> bef;
    for (int i = 1; i < n; i++) {
        int a; cin >> a;
        if (a - bef <= t) sum += (a - bef);
        else sum += t;
        bef = a;
    }
    cout << sum + t << endl;
}
