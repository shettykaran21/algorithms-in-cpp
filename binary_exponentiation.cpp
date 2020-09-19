#include <bits/stdc++.h>

using namespace std;

#define ll long long

// ll binaryExponentiation(ll a, ll b) {
//   if  (b == 0) {
//     return 1;
//   }
//   ll res = binaryExponentiation(a, b / 2);
//   if (b % 2 != 0) {
//     return res * res * a;
//   } else {
//     return res * res;
//   }
// }

ll binaryExponentiation(ll a, ll b) {
  long long res = 1;
  while (b > 0) {
    if (b & 1) {
      res = res * a;
    }
    a = a * a;
    b >>= 1;
  }
  return res;
}

int main() {
  cout << binaryExponentiation(2, 10);
  return 0;
}