template<class T> T gcd(T a, T b) {
  if(a < b) {
    return gcd(b, a);
  }
  T r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}