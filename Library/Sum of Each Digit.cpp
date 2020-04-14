int sed(int N) {
  int a = N;
  int c = 0;
  bool b = true;
  while(b){
    if (a == 0) {
      b = false;
    }
    c += a % 10;
    a /= 10;
  }
  return c;
}