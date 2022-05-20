#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> ans;
    for (int i = 1; i <= 99; i++) ans.push_back(i), ans.push_back(i * 100), ans.push_back(i * 10000);
    cout << 297 << endl;
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
}
