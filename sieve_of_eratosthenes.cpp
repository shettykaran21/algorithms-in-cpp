#include <bits/stdc++.h>

using namespace std;

void sieveOfEratosthenes(int m, int n);

int main() {
  sieveOfEratosthenes(10000, 20000);
  return 0;
}

// void sieveOfEratosthenes(int m, int n) {
//   vector<bool> mark(n + 1, true);
//   mark[0] = false, mark[1] = false;

//   for (int i = 2; i * i <= n; ++i) {
//     if (mark[i]) {
//       for (int j = i * i; j <= n; j += i) {
//         mark[j] = false;
//       }
//     }
//   }

//   for (int i = m; i < n; ++i) {
//     if (mark[i]) {
//       cout << i << " ";
//     }
//   }
// }

void sieveOfEratosthenes(int n) {
  vector<bool> mark(n + 1, true);
  mark[0] = false, mark[1] = false;

  for (int i = 2; i * i <= n; ++i) {
    if (mark[i]) {
      for (int j = i * i; j <= n; j += i) {
        mark[j] = false;
      }
    }
  }

  for (int i = 2; i < n; ++i) {
    if (mark[i]) {
      cout << i << " ";
    }
  }
}