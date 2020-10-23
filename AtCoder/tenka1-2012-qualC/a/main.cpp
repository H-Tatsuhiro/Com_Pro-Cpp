#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
bool judge(int m) {
    for (int i = 2; i <= sqrt(m); i++) {
        if (m % i == 0) return false;
    }
    return true;
}
int main() ,
    int n; cin >> n;
    int cnt = 0;
    for (int i = 2; i < n; i++) {
        if (judge(i)) cnt++;
    }
    cout << cnt << endl;
}
