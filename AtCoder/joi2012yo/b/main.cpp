#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> score(n, 0);
    for (int i = 0; i < n * (n - 1) / 2; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (c == d) score[a - 1]++, score[b - 1]++;
        else if (c < d) score[b - 1] += 3;
        else score[a - 1] += 3;
    }
    vector<int> sorted = score;
    sort(sorted.begin(), sorted.end());
    reverse(sorted.begin(), sorted.end());
    vector<int> score_sorted, ans(n, 0);
    sorted.push_back(-1);
    for (int i = 0; i < sorted.size() - 1; i++) if (sorted[i] != sorted[i + 1]) score_sorted.push_back(sorted[i]);
    int now = 1, next = 1;
    for (int i = 0; i < score_sorted.size(); i++) {
        for (int j = 0; j < n; j++) {
            if (score_sorted[i] == score[j]) {
                ans[j] = now;
                next++;
            }
        }
        now = next;
    }
    for (int i = 0; i < n; i++) cout << ans[i] << endl;
}
