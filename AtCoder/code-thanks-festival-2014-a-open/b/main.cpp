#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<int> a(3, 0);
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    int t = 0;
    long long int sum = 0;
    while(true) {
        for (int i = 2; i >= 0; i--) {
            t++;
            sum += a[i];
            if (sum >= n) {
                cout << t << endl;
                return 0;
            }
        }
    }
}
