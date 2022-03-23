#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<char, int>> RanLengthEncoding(string s){
    int n = s.length();
    vector<pair<char, int>> ret = {};
    if (n == 0) return ret;
    pair<char, int> p = make_pair(s[0], 1);
    for (int i = 1; i < n; i++) {
        if (s[i] == p.first) p.second++;
        else ret.push_back(p), p.first = s[i], p.second = 1;
    }
    ret.push_back(p);
    return ret;
}
int main() {
    string s; cin >> s;
    vector<pair<char, int>> rle = RanLengthEncoding(s);
    cout << rle.size() - 1 << endl;
}
