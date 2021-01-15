#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int c; cin >> c;
    vector<int> ans(21, 0);
    int i = 1, a = 1; bool t = true;
    while (i <= 200) {
        ans[a] += i,  i++;
        if (t) {
            if (a == 20) t = false;
            else a++;
        }
        else {
            if (a == 1) t = true;
            else a--;
        }
    }
    cout << ans[c] << endl;
}
