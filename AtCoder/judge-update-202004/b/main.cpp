#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> blue, red;
    for (int i = 0; i < n; i++) {
        int x; char c; cin >> x >> c;
        if (c == 'R') red.push_back(x);
        else blue.push_back(x);
    }
    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end());
    for (int i = 0; i < red.size(); i++) cout << red[i] << endl;
    for (int i = 0; i < blue.size(); i++) cout << blue[i] << endl;
}
