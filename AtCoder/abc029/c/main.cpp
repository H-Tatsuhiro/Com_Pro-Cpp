#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
vector<string> v;
void solve(string s, int a) {
    if (a == 0) v.push_back(s);
    else {
        solve(s + 'a', a - 1);
        solve(s + 'b', a - 1);
        solve(s + 'c', a - 1);
    }
}
int main(){
    int n; cin >> n;
    solve("", n);
    sort(v.begin(), v.end());
    for (auto x : v) cout << x << endl;
}