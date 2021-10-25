#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
   int n; cin >> n;
   vector<string> v(n, "");
   for (int i = 0; i < n; i++) cin >> v[i];
   vector<vector<int>> c(n, vector<int>(26, 0));
   vector<char> ccc = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
   for (int i = 0; i < n; i++) for (int j = 0; j < v[i].length(); j++) c[i][v[i][j] - 'a']++;
   string ans = "";
   for (int i = 0; i < 26; i++) {
       int m = 100;
       for (int j = 0; j < n; j++) m = min(m, c[j][i]);
       for (int j = 0; j < m; j++) ans.push_back(ccc[i]);
   }
   sort(ans.begin(), ans.end());
   cout << ans << endl;
}
