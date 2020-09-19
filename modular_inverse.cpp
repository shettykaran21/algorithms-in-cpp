#include <iostream>

using namespace std;

#define ll long long

// void modularInverse(ll a, ll m);
// ll gcdExtended(ll a, ll b, int &x, int &y);

void modularInverse(ll a, ll m);
ll modularExponentiation(ll a, ll b, ll m);
ll gcd(ll a, ll b);

int main() {
  modularInverse(3, 11);
  return 0;
}

// Extended Eucledian
// ll gcdExtended(ll a, ll b, int &x, int &y) {
//   if (b == 0) {
//     x = 1;
//     y = 0;
//     return a;
//   }
//   int x1, y1;
//   int gcd = gcdExtended(b, a % b, x1, y1);
//   x = y1;
//   y = x1 - (a / b)  * y1;
//   return gcd;
// }

// void modularInverse(ll a, ll m) {
//   a %= m;
//   int x, y;
//   int g = gcdExtended(a, m, x, y);
//   if (g == 1)
//     ll res = (x % m + m) % m;
//     cout << "Inverse is " << res << '\n';
//   } else {
//     cout << "Inverse doesn't exist!\n";
//   }
// }

// Fermat's Little Theorem
void modularInverse(ll a, ll m) {
  a %= m;
  if (gcd(a, m) == 1) {
    cout << "Inverse is " << modularExponentiation(a, m - 2, m) << '\n';
  } else {
    cout << "Inverse doesn't exist\n";
  }
}

ll gcd(ll a, ll b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

ll modularExponentiation(ll a, ll b, ll m) {
  a %= m;
  ll res = 1;
  while (b > 0) {
    if (b & 1) {
      res = res * a % m;
    }
    a = a * a % m;
    b >>= 1;
  }
  return res;
}
