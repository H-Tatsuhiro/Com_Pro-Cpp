
//
// Created by Tatsuhiro Hashimoto on 2020/05/04.
//
#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    int cnt_1 = 0, cnt_2 = 0;
    int tmp_1 = A, tmp_2 = A;
    for (int i = 0; i < 10; ++i) {
        if (tmp_1 == B) break;
        if (tmp_1 == 9) {
            tmp_1 = 0;
            cnt_1++;
        }
        else {
            cnt_1++;
            tmp_1++;
        }
    }
    for (int j = 0; j < 10; ++j) {
        if (tmp_2 == B) break;
        if (tmp_2 == 0) {
            tmp_2 = 9;
            cnt_2++;
        }
        else {
            tmp_2--;
            cnt_2++;
        }
    }
    cout << min(cnt_1, cnt_2) << endl;
}
