#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n; int cnt = 0;
    unordered_map<int, bool> Map;
    for (int i = 0; i < n; i++) {
        int a; cin >> a; Map[a] = true;
        if (Map[cnt]) {
            for (int j = cnt + 1; ; j++) {
                if (!Map[j]) {
                    cnt = j; break;
                }
            }
        }
        cout << cnt << endl;
    }
}
