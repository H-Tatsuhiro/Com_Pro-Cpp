template<class T> T sed(T N) {
    string s = to_string(N);
    T r = 0;
    for (int i = 0; i < s.length(); i++) r += (T)(s[i] - 48);
    return r;
}