#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string n, ans = "";
    cin >> n;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '0') ans += "nil";
        else if (n[i] == '1') ans += "un";
        else if (n[i] == '2') ans += "bi";
        else if (n[i] == '3') ans += "tri";
        else if (n[i] == '4') ans += "quad";
        else if (n[i] == '5') ans += "pent";
        else if (n[i] == '6') ans += "hex";
        else if (n[i] == '7') ans += "sept";
        else if (n[i] == '8') ans += "oct";
        else if (n[i] == '9') ans += "enn";
        if (i == n.length() - 1) ans += "ium";
    }
    ans[0] = toupper(ans[0]);
    for (int i = 0; i < ans.length(); i++) {
        if (i < ans.length() - 1) {
            if ((ans[i] == 'n' && ans[i + 1] == 'n' && ans[i + 2] == 'n') || (ans[i] == 'i' && ans[i + 1] == 'i')) continue;
            else cout << ans[i];
        }
        else cout << ans[i] << endl;
    }
}
