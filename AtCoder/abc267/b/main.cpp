#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    if (s[0] != '1') {
        vector<vector<int>> p(7);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                if (i == 0 || i == 4) p[3].push_back(i);
                if (i == 1 || i == 7) p[2].push_back(i);
                if (i == 2 || i == 8) p[4].push_back(i);
                if (i == 6) p[0].push_back(i);
                if (i == 3) p[1].push_back(i);
                if (i == 5) p[5].push_back(i);
                if (i == 9) p[6].push_back(i);
            }
        }
        for (int i = 0; i < 5; i++) {
            if (p[i].size() > 0) {
                for (int j = i + 2; j < 7; j++) {
                    if (p[j].size() > 0) {
                        int cnt = 0;
                        for (int k = i + 1; k < j; k++) cnt += p[k].size();
                        if (cnt == 0) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "No" << endl;
}
