#include <bits/stdc++.h>

using namespace std;

#define ll long long

// ll modularExponentiation(ll a, ll b, ll m) {
//   a %= m;
//   if (b == 0) {
//     return 1;
//   }
//   ll res = modularExponentiation(a, b / 2, m);
//   if (b & 1) {
//     return res * res * a % m;
//   } else {
//     return res * res % m;
//   }
// }

ll modularExponentiation(ll a, ll b, ll m) {
  a %= m;
  long long res = 1;
  while (b > 0) {
    if (b & 1) {
      res = res * a % m;
    }
    a = a * a % m;
    b >>= 1;
  }
  return res;
}

int main() {
  cout << modularExponentiation(2312, 3434, 6789);
  return 0;
}