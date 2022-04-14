#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    long long int q; cin >> q;
    function<char(char, long long int)> g = [&](char c, long long int x){
        return char('A' + (c - 'A' + x) % 3);
    };
    function<char(long long int, long long int)> f = [&](long long int x, long long int y){
        if (x == 0) return s[y];
        if (y == 0) return g(s[0], x);
        return g(f(x - 1, y / 2), y % 2 + 1);
    };
     for (int i = 0; i < q; i++) {
        long long int t, k; cin >> t >> k;
        cout << f(t, k - 1) << endl;
    }
}
