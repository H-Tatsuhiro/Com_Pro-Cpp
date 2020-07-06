#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int N; cin >> N;
    unordered_map<string, int> Map;
    for (int i = 0; i < N; ++i) {
        string s; cin >> s;
        Map[s]++;
    }
    cout << "AC x " << Map["AC"] << endl;
    cout << "WA x " << Map["WA"] << endl;
    cout << "TLE x " << Map["TLE"] << endl;
    cout << "RE x " << Map["RE"] << endl;
}
