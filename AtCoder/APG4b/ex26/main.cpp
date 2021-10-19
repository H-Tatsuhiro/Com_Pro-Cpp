#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
void print_vec(vector<int> vec) {
    cout << "[ ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << " ";
    }
    cout << "]" << endl;
}
int main() {
    int n; cin >> n;
    unordered_map<char, int> Map_int;
    for (char i = '1'; i <= '9'; i++) Map_int[i] = i - '0';
    int place = 0;
    unordered_map<char, int> Map;
    vector<vector<int>> b(100);
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s == "int")  {
            char x; cin >> x;
            char m; int res = 0;
            bool p = true;
            while(true) {
                cin >> m;
                if (m == ';') break;
                if (m == '=') continue;
                else if (m == '-') p = false;
                else if (m == '+') p = true;
                else res += (p ? Map_int[m] : -1 * Map_int[m]);
            }
            Map_int[x] = res;
        }
        else if (s == "print_int") {
            char m; int res = 0;
            bool p = true;
            while(true) {
                cin >> m;
                if (m == ';') break;
                else if (m == '-') p = false;
                else if (m == '+') p = true;
                else res += (p ? Map_int[m] : -1 * Map_int[m]);
            }
            cout << res << endl;
        }
        else if (s == "vec") {
            char x; cin >> x;
            char m;
            vector<int> res;
            while(true) {
                cin >> m;
                if (m == ';') break;
                if (m == '=') continue;
                else if (m == '-') {
                    vector<int> q;
                    cin >> m;
                    if ('a' <= m && m <= 'z') q = b[Map[m]];
                    else {
                        while (true) {
                            cin >> m;
                            if (m == ']') break;
                            if (m == ',') continue;
                            else q.push_back(Map_int[m]);
                        }
                    }
                    for (int i = 0; i < res.size(); i++) res[i] -= q[i];
                }
                else if (m == '+') {
                    vector<int> q;
                    cin >> m;
                    if ('a' <= m && m <= 'z') q = b[Map[m]];
                    else {
                        while (true) {
                            cin >> m;
                            if (m == ']') break;
                            if (m == ',') continue;
                            else q.push_back(Map_int[m]);
                        }
                    }
                    for (int i = 0; i < res.size(); i++) res[i] += q[i];
                }
                else if (m == '[') {
                    vector<int> q;
                    while (true) {
                        cin >> m;
                        if (m == ']') break;
                        if (m == ',') continue;
                        else q.push_back(Map_int[m]);
                    }
                    res = q;
                }
                else if ('a' <= m && m <= 'z') res = b[Map[m]];
            }
            b[place] = res, Map[x] = place, place++;
        }
        else {
            char m;
            vector<int> res;
            while(true) {
                cin >> m;
                if (m == ';') break;
                else if (m == '-') {
                    vector<int> q;
                    cin >> m;
                    if ('a' <= m && m <= 'z') q = b[Map[m]];
                    else {
                        while (true) {
                            cin >> m;
                            if (m == ']') break;
                            if (m == ',') continue;
                            else q.push_back(Map_int[m]);
                        }
                    }
                    for (int i = 0; i < res.size(); i++) res[i] -= q[i];
                }
                else if (m == '+') {
                    vector<int> q;
                    cin >> m;
                    if ('a' <= m && m <= 'z') q = b[Map[m]];
                    else {
                        while (true) {
                            cin >> m;
                            if (m == ']') break;
                            if (m == ',') continue;
                            else q.push_back(Map_int[m]);
                        }
                    }
                    for (int i = 0; i < res.size(); i++) res[i] += q[i];
                }
                else if (m == '[') {
                    vector<int> q;
                    while (true) {
                        cin >> m;
                        if (m == ']') break;
                        if (m == ',') continue;
                        else q.push_back(Map_int[m]);
                    }
                    res = q;
                }
                else if ('a' <= m && m <= 'z') res = b[Map[m]];
            }
            print_vec(res);
        }
    }
}
