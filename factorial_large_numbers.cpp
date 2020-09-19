#include <bits/stdc++.h>

using namespace std;

int multiply(int, int[], int);
void storeInArray(int, int[]);
int countDigits(int);
void factorial(int);

int main() {
  // int num = 789;
  // int x = 98;

  // int res[countDigits(num)];
  // storeInArray(num, res);
  // int size = multiply(98, res, countDigits(num));
  // for (int i = size - 1; i >= 0; i--) {
  //   cout << res[i];
  // }
  factorial(6);

  return 0;
}

void factorial(int n) {
  int res[500];

  res[0] = 1;
  int res_size = 1;

  for (int x = 2; x <= n; x++) {
    res_size = multiply(x, res, res_size);
  }

  for (int i = res_size - 1; i >= 0; i--) {
    cout << res[i];
  }
}

int countDigits(int num) {
  int c = 0;
  int temp = num;
  while (temp) {
    ++c;
    temp /= 10;
  }
  return c;
}

void storeInArray(int num, int arr[]) {
  int count = countDigits(num);
  for (int i = 0; i < count; ++i) {
    arr[i] = num % 10;
    num /= 10;
  }
}

int multiply(int x, int res[], int resSize) {
  int carry = 0;
  for (int i = 0; i < resSize; ++i) {
    int mul = x * res[i] + carry;
    carry = mul / 10;
    res[i] = mul % 10;
  }

  while (carry) {
    res[resSize] = carry % 10;
    carry /= 10;
    resSize++;
  }
  return resSize;
}