#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> s(5, "");
    vector<pair<char, string>> sample;
    sample.push_back(make_pair('0', "####.##.##.####"));
    sample.push_back(make_pair('1', ".#.##..#..#.###"));
    sample.push_back(make_pair('2', "###..#####..###"));
    sample.push_back(make_pair('3', "###..####..####"));
    sample.push_back(make_pair('4', "#.##.####..#..#"));
    sample.push_back(make_pair('5', "####..###..####"));
    sample.push_back(make_pair('6', "####..####.####"));
    sample.push_back(make_pair('7', "###..#..#..#..#"));
    sample.push_back(make_pair('8', "####.#####.####"));
    sample.push_back(make_pair('9', "####.####..####"));
    for (int i = 0; i < 5; i++) cin >> s[i];
    string ans = "";
    for (int i = 1; i <= 4 * n + 1; i += 4) {
        string v = "";
        for (int j = 0; j < 5; j++) v += s[j].substr(i, 3);
        for (int k = 0; k < sample.size(); k++) if (v == sample[k].second) ans += sample[k].first;
    }
    cout << ans << endl;
}
