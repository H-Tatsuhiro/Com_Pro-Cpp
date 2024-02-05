#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    vector<pair<string, int>> v;
    v.emplace_back("tourist", 3858);
    v.emplace_back("ksun48", 3679);
    v.emplace_back("Benq", 3658);
    v.emplace_back("Um_nik", 3648);
    v.emplace_back("apiad", 3638);
    v.emplace_back("Stonefeang", 3630);
    v.emplace_back("ecnerwala", 3613);
    v.emplace_back("mnbvmar", 3555);
    v.emplace_back("newbiedmy", 3516);
    v.emplace_back("semiexp", 3481);
    for (int i = 0; i < v.size(); i++) if (v[i].first == s) cout << v[i].second << endl;
}


