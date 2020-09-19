#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'

int gcdExtended(int a, int b, int &x, int &y);

int main() {
  int x, y, a = 35, b = 15;
  cout << gcdExtended(a, b, x, y) << '\n';
  deb(x);
  deb(y);
  return 0;
}

int gcdExtended(int a, int b, int &x, int &y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }

  int x1, y1;
  int gcd = gcdExtended(b, a % b, x1, y1);

  x = y1;
  y = x1 - y1 * (a / b);

  return gcd;
}