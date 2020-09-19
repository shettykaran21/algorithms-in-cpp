#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'

int gcd(int a, int b);

int main() {
  cout << gcd(60, 36);
}

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

// int gcd(int a, int b) {
//   while (true) {
//     int temp = a;
//     a = b;
//     b = temp % b;
//     if (b == 0) {
//       return a;
//     }
//   }
// }
