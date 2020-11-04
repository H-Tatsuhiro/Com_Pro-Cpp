#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> score(n, 0);
    for (int i = 0; i < n; i++) cin >> score[i];
    vector<int> score_sort = score;
    sort(score_sort.begin(), score_sort.end());
    reverse(score_sort.begin(), score_sort.end());
    vector<int> score_sorted; score_sort.push_back(-100);
    for (int i = 0; i < n; i++) if (score_sort[i] != score_sort[i + 1]) score_sorted.push_back(score_sort[i]);
    int pos = 1, next = 1;
    vector<int> ans(n, 0);
    for (int i = 0; i < score_sorted.size(); i++) {
        for (int j = 0; j < n; j++) {
           if (score_sorted[i] == score[j]) {
               ans[j] = pos, next++;
           }
        }
        pos = next;
    }
    for (int i = 0; i < n; i++) cout << ans[i] << endl;
}
